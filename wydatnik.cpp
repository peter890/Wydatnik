#include "wydatnik.h"
#include "ui_wydatnik.h"
#include <QInputDialog>


Wydatnik* Wydatnik::instance = 0;

Wydatnik::Wydatnik(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Wydatnik)
{

    QSettings settings(QApplication::applicationDirPath()+"/cfg/config.ini",QSettings::IniFormat);
    QTextCodec::setCodecForTr (QTextCodec::codecForName ("CP-1250"));

    userid = -1 ;
    calendar = NULL;
    changedConnection(false);
    QRect frect = frameGeometry();
    frect.moveCenter(QDesktopWidget().availableGeometry().center());
    move(frect.topLeft());
    show();






    //settings.setValue("Run/FirstRun", 1);
    //int x = QInputDialog::getInteger(this,"tekst","cos");
    if(settings.value("RUN/FirstRun",1).toInt())
    {
        //firstrun = new FirstRun(0);
        //firstrun->show();


    }

    ui->setupUi(this);

    zaladujPolaczenia();


    //connectDB("localhost","root","","wydatnik");

    if(!connectDB("db4free.net","compal","kopek2705","wydatnik"))
    {
        DBError(db->lastError());
    }
zaloguj();


}

Wydatnik* Wydatnik::getInstance()
{
    if(Wydatnik::instance == 0)
        instance = new Wydatnik();
    return instance;
}
Wydatnik::~Wydatnik()
{
    db->close();
    delete db;
    delete ui;
    delete login;
}
void Wydatnik::zaladujPolaczenia()
{

    connect(this,SIGNAL(changedConnection(bool)),this,SLOT(zmienStan(bool)));
    connect(ui->actionZaloguj,SIGNAL(triggered()),this,SLOT(zaloguj()));
    connect(ui->actionWyloguj,SIGNAL(triggered()),this,SLOT(wyloguj()));
    connect(ui->actionZako_cz,SIGNAL(triggered()),this,SLOT(close()));
    connect(ui->actionZarejestruj,SIGNAL(triggered()),this,SLOT(rejestracja()));
    connect(ui->actionDodaj_wydatek, SIGNAL(triggered()),this,SLOT(dodajWydatek()));
    connect(ui->ButtonWyszukaj,SIGNAL(clicked()),this,SLOT(wyszukaj()));
    //========SIGNAL_MAPPER===============
    signalMapper = new QSignalMapper(this);
    signalMapper->setMapping(ui->ButtonDataOd,ui->dateEditOd);
    signalMapper->setMapping(ui->ButtonDataDo,ui->dateEditDo);
    connect(ui->ButtonDataOd,SIGNAL(clicked()),signalMapper,SLOT(map()));
    connect(ui->ButtonDataDo,SIGNAL(clicked()),signalMapper,SLOT(map()));
    connect(signalMapper,SIGNAL(mapped(QWidget*)),SLOT(ustawDate(QWidget*)));


    connect(ui->actionCofnij, SIGNAL(triggered()), this, SLOT(OdtworzStan()));



    ui->actionUsu_zaznaczone->setDisabled(true);
    ui->actionCofnij->setDisabled(true);


}
void Wydatnik::keyPressEvent(QKeyEvent *k)
{

    switch(k->key())
    {
    case Qt::Key_Insert:
        dodajWydatek();
        break;
     case 16777220:
        wyszukaj();
        break;

    }

}
void Wydatnik::zaloguj()
{

    login = new Login(this);
    login->show();
}
void Wydatnik::rejestracja()
{

    registration = new Registration(this);
    registration->show();
}
void Wydatnik::dodajWydatek()
{

    rozchody = new Rozchody(this);
    rozchody->show();
}

void Wydatnik::wyloguj()
{

    this->changeConnection(false);
    userid = -1;
}
bool Wydatnik::zaloguj(QString _login, QString _haslo)
{
    //if(db->open())
    //{
    QSqlQuery pobieranie("SELECT * FROM users WHERE login = '"+ _login +"' AND password = '"+ _haslo +"' ");
    if(pobieranie.numRowsAffected()!=0)
    {
        while(pobieranie.next())
        {
            userid = pobieranie.value(0).toInt();
            this->changeConnection(true);
        }

        ui->tableWidget->show();

        return true;
    }
    else
    {
        Error(tr("Podano niepoprawna nazwe u¿ytkownika lub has³o"));
        return false;
    }

    return true;
}
bool Wydatnik::zalogowany()
{
    return connected;
}
int Wydatnik::getUserid()
{
    return userid;
}
bool Wydatnik::connectDB(QString _hostname, QString _username, QString _password, QString _dbname)
{
    db = new QSqlDatabase();
    *db = QSqlDatabase::addDatabase("QMYSQL");
    db->setHostName(_hostname);
    db->setUserName(_username);
    db->setPassword(_password);
    db->setDatabaseName(_dbname);
    db->setPort(3306);
    if(db->open())
    {
        return true;
    }
    else
        return false;
}
void Wydatnik::exec(QString _query)
{
    QSqlQuery zapytanie(_query);

    ui->tableWidget->sqlQuery(zapytanie);
    ui->tableWidget->setHorizontalHeaderLabel(0,"zaznaczenie");



    MyCheckBox* box;
    signalMapper2 = new QSignalMapper(this);


    for(int i=0; i< zapytanie.numRowsAffected(); ++i)
    {
        zapytanie.next();
        box = new MyCheckBox(zapytanie.value(0).toInt(),i,0,ui->tableWidget);

        ui->tableWidget->wstawWidget(i,0,box);
        signalMapper2->setMapping(box,box);
        connect(box,SIGNAL(clicked()),signalMapper2,SLOT(map()));

    }
    connect(signalMapper2,SIGNAL(mapped(QWidget*)),this,SLOT(zaznaczenie(QWidget*)));
    connect(ui->Button_edytuj, SIGNAL(clicked()), this, SLOT(edytuj()));

}
void Wydatnik::changeConnection(bool _connected)
{
    if(connected != _connected)
    {
        connected = _connected;
        emit changedConnection(_connected);
    }
}
void Wydatnik::zmienStan(bool _stan)
{
    if(!_stan) //false(niezalogowany)
    {
        exec("Select nazwa, kwota, data, opis FROM expenses  WHERE  userID = '-1';");
        ui->menuPlik->insertAction(ui->actionWyloguj,ui->actionZaloguj);
        ui->menuPlik->removeAction(ui->actionWyloguj);
        ui->statusBar->showMessage("Zalogowany jako: niezalogowany" );
        ui->label_username->setText("Zalogowany jako: niezalogowany" );
        Obserwatorzy.clear();
        userid = 0;

    }
    else//true (zalogowany)
    {
        ui->menuPlik->insertAction(ui->actionZaloguj,ui->actionWyloguj);
        ui->menuPlik->removeAction(ui->actionZaloguj);

        //db->open();
        QSqlQuery zapytanie("SELECT * FROM users WHERE id='"+userName.setNum(userid)+"';");
        while(zapytanie.next())
        {
            userName = zapytanie.value(1).toString();

            ui->statusBar->showMessage("Zalogowany jako:  < " + userName+" >");
            ui->label_username->setText("Zalogowany jako: < " + userName+" >");
        }

        QDate dataOd, dataDo;
        dataDo.setDate(QDate::currentDate().year(),QDate::currentDate().month(),QDate::currentDate().day());
        dataOd.setDate(QDate::currentDate().year(),QDate::currentDate().month()-1,QDate::currentDate().day());

        ui->dateEditOd->setDate(dataOd);
        ui->dateEditDo->setDate(dataDo);

        Obserwatorzy.push_back(new Wykres(ui->tab_2));
        Obserwatorzy.push_back(ui->LabelSrodkiDostepne);

        this->wyszukaj();




    }
}
void Wydatnik::DBError(QSqlError _error)
{
    QMessageBox::critical(this,"Blad",_error.driverText() + "\n" + _error.databaseText());
}
void Wydatnik::Error(QString _error)
{
    QMessageBox::critical(this,"Blad",_error);
}

void Wydatnik::zaladujDane(QSqlQuery zapytanie)
{
    // QString tmp;

    //QSqlQuery zapytanie("SELECT data, sum(abs(kwota)) kwota FROM expenses WHERE userID='"+tmp.setNum(userid)+"'  group by data; ");
    dane.clear();
    while(zapytanie.next())
    {
        dane.push_back(new Dane(zapytanie.value(3).toString().remove(0,5),zapytanie.value(2).toDouble(),zapytanie.value(4).toInt()));
    }


}

void Wydatnik::dodajObserwatora(Obserwator *obs)
{
    Obserwatorzy.push_back(obs);
}
void Wydatnik::usunObserwatora(Obserwator *obs)
{
    Obserwatorzy.removeOne(obs);
}
void Wydatnik::wyszukaj()
{
    QString zapytanie, tmp;
    zapytanie = "Select id, nazwa, kwota, data, opis, wydatek FROM expenses ";
    if(ui->BoxTyp->currentIndex() == 1) //wydatek
    {
        zapytanie.append("where wydatek = '1' AND ");
    }
    else if(ui->BoxTyp->currentIndex() == 2) //wplata
    {
        zapytanie.append("where wydatek = '0' AND ");
    }
    if(ui->BoxTyp->currentIndex() == 0)
    {
        zapytanie.append(" WHERE ") ;
    }
    zapytanie.append(" userID = '"+tmp.setNum(userid)+"' AND ");
    zapytanie.append("data BETWEEN '"+ui->dateEditOd->date().toString("yyyy-MM-dd")+"' AND '"+ui->dateEditDo->date().toString("yyyy-MM-dd")+"'");


    if(!ui->EditMin->text().isEmpty() )
    {
        zapytanie.append(" AND kwota >= '"+ui->EditMin->text()+"'");
    }
    if(!ui->EditMax->text().isEmpty() )
    {
        zapytanie.append(" AND kwota <= '"+ui->EditMax->text()+"'");
    }

    zapytanie.append(" ORDER BY data;");

    ui->sqledit->setText(zapytanie);
    this->exec(zapytanie);
    zaladujDane(zapytanie);
    RefreshData(this);



}
void Wydatnik::ustawDate(QWidget* o)
{
    if(calendar != NULL && calendar->isActiveWindow())
    {
        calendar->close();
        calendar = NULL;
        return;
    }
    QDate dataTmp;
    QDateEdit* dateEdit = dynamic_cast<QDateEdit*>(o);

    calendar = new QCalendarWidget(this);
    calendar->setWindowFlags(Qt::WindowTitleHint);
    calendar->setGeometry(QRect(dateEdit->x(),dateEdit->y()+150,215,200));

    calendar->show();
    calendar->setSelectedDate(dataTmp = dateEdit->date());
    connect(calendar,SIGNAL(clicked(QDate)),dateEdit,SLOT(setDate(QDate)));
    connect(calendar,SIGNAL(clicked(QDate)),calendar,SLOT(close()));
    connect(calendar,SIGNAL(selectionChanged()),calendar,SLOT(close()));


}

void Wydatnik::RefreshData(Obserwowany *o)
{
    QList<Obserwator*>::iterator it;
    for(it = Obserwatorzy.begin(); it!=Obserwatorzy.end(); ++it)
    {
        (*it)->zdarzenie(o);
    }
}
vector<Dane*> Wydatnik::getData()
{
    return dane;
}


void Wydatnik::zaznaczenie(QWidget* w)
{
    qDebug() << "zaznaczenie\n";
    MyCheckBox* myBox = dynamic_cast<MyCheckBox*>(w);
    if(!lista_zaznaczone.empty())
    {
        for(int i=0; i<lista_zaznaczone.size(); ++i)
        { //qDebug() << "lista id: " << dynamic_cast<MyCheckBox*>(lista_zaznaczone.at(i))->getId() << "\n parametr id: " << myBox->getId();
            if(myBox->getId() == dynamic_cast<MyCheckBox*>(lista_zaznaczone.at(i))->getId())
            {
                lista_zaznaczone.removeOne(w);
                //ui->listSize->setNum(lista_zaznaczone.size());
                return;
            }
        }
    }
    lista_zaznaczone.append(w);
    //ui->listSize->setNum(lista_zaznaczone.size());
    //QMessageBox::information(0,"tekst","id: "+temp.setNum(myBox->getId()));
    ui->tableWidget->selectRow(myBox->getRowNum());

}
void Wydatnik::edytuj()
{
    if(lista_zaznaczone.empty())
        return;
    qDebug() << "edytuj: " << lista_zaznaczone.size() << "\n";
    QString tmp;
    MyCheckBox* myBox;
    for(int i=0; i < lista_zaznaczone.size(); i++)
    {
        myBox = dynamic_cast<MyCheckBox*>(lista_zaznaczone.at(i));
        lista.erase(lista.begin(), lista.end());
        lista << tmp.setNum(myBox->getId());
        for(int k=1; k< ui->tableWidget->getHorizontalHederLabels().count(); ++k)
        {

            if(ui->tableWidget->item(myBox->getRowNum(),k))
            {
                //qDebug() << ui->tableWidget->item(myBox->getRowNum(),k)->text();
                lista << ui->tableWidget->item(myBox->getRowNum(),k)->text();
                myBox->setChecked(false);

            }

        }
        lista_zaznaczone.removeOne(myBox);
        editData = new EditData(lista);
        editData->show();

    }
}
void Wydatnik::ZapiszStan(QString zapytanie)
{
    historia.push_back(new Pamiatka(zapytanie));
    ui->actionCofnij->setDisabled(false);

}
void Wydatnik::OdtworzStan()
{
    db->exec(historia[historia.size()-1]->OdtworzStan());
    qDebug() << "cos" << historia[historia.size()-1]->OdtworzStan();
    delete historia[historia.size()-1];
    if(historia.size()==0)
        ui->actionCofnij->setDisabled(true);
    this->aktualizujSaldo();

}
void Wydatnik::aktualizujSaldo()
{
    QString temp;
    Wydatnik::getInstance()->db->exec("UPDATE users SET saldo = (SELECT SUM(kwota) FROM expenses WHERE userId="+temp.setNum(Wydatnik::getInstance()->getUserid())+" AND wydatek = 0) - (SELECT SUM(kwota) FROM expenses WHERE userId="+temp.setNum(Wydatnik::getInstance()->getUserid())+" AND wydatek = 1) WHERE id = "+temp.setNum(Wydatnik::getInstance()->getUserid())+";");
}
