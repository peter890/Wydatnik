#include "wydatnik.h"
#include "ui_wydatnik.h"
#include <QInputDialog>

bool Wydatnik::exists = 0;
Wydatnik* Wydatnik::instance = 0;

Wydatnik::Wydatnik(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::Wydatnik)
{
    QSettings settings(QApplication::applicationDirPath()+"/cfg/config.ini",QSettings::IniFormat);
    QTextCodec::setCodecForTr (QTextCodec::codecForName ("CP-1250"));
    exists = 1;
    userid = 1 ;
    calendar = NULL;



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
    else
    {
        this->show();

        this->changeConnection(true); //zmien stan programu(zalogowany/niezalogowany)
    }

}

Wydatnik* Wydatnik::getInstance()
{
    if(Wydatnik::exists)
        return instance;
    else
    {
        instance = new Wydatnik();
        return instance;
    }
}
Wydatnik::~Wydatnik()
{
    db->close();
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

        ui->tableView->show();

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
    queryModel = new QSqlQueryModel(ui->tableView);
    queryModel->setQuery(_query,*db);

    if(queryModel->lastError().type() == QSqlError::NoError)
    {
        ui->tableView->setModel(queryModel);
        ui->tableView->show();
    }
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
        Obserwatorzy.clear();

    }
    else//true (zalogowany)
    {
        ui->menuPlik->insertAction(ui->actionZaloguj,ui->actionWyloguj);
        ui->menuPlik->removeAction(ui->actionZaloguj);
        QString login;
        //db->open();
        QSqlQuery zapytanie("SELECT * FROM users WHERE id='"+login.setNum(userid)+"';");
        while(zapytanie.next())
        {
            login = zapytanie.value(1).toString();
            ui->statusBar->showMessage("Zalogowany jako: " + login);
        }

        QDate dataOd, dataDo;
        dataDo.setDate(QDate::currentDate().year(),QDate::currentDate().month(),QDate::currentDate().day());
        dataOd.setDate(QDate::currentDate().year(),QDate::currentDate().month()-1,QDate::currentDate().day());

        ui->dateEditOd->setDate(dataOd);
        ui->dateEditDo->setDate(dataDo);


        this->wyszukaj();

        Obserwatorzy.push_back(new Wykres(ui->tab_2));
        Obserwatorzy.push_back(ui->LabelSrodkiDostepne);



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
        dane.push_back(new Dane(zapytanie.value(2).toString().remove(0,5),zapytanie.value(1).toDouble(),zapytanie.value(3).toInt()));
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
    zapytanie = "Select nazwa, kwota, data, opis FROM expenses ";
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

    zapytanie.append(";");

    ui->sqledit->setText(zapytanie);
    this->exec(zapytanie);
    zaladujDane(zapytanie);

    RefreshData(this);

}
void Wydatnik::ustawDate(QWidget* o)
{
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
//void Wydatnik::mousePressEvent(QMouseEvent *event)
//{
//    if(calendar->isVisible())
//    {
//            calendar->close();
//    }
//}
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
