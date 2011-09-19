#include "rozchody.h"
#include "ui_rozchody.h"
#include <QValidator>
#include <QDate>

Rozchody::Rozchody(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::Rozchody)
{
    ui->setupUi(this);
    this->setMaximumSize(367,276);

    ui->edit_kwota->setValidator(new QDoubleValidator(this));
    //ui->edit_data->setText(QDate::currentDate().toString("yyyy-MM-dd"));
    ui->dateEdit->setDate(QDate::currentDate());
    //ui->label_5->hide();
    connect(ui->button_dodaj,SIGNAL(clicked()),this,SLOT(dodaj()));
    connect(ui->button_anuluj,SIGNAL(clicked()),this,SLOT(close()));

    QSignalMapper* signalMapper = new QSignalMapper(this);
    signalMapper->setMapping(ui->buttonCalendar,ui->dateEdit);
    connect(ui->buttonCalendar,SIGNAL(clicked()),signalMapper,SLOT(map()));
    connect(signalMapper,SIGNAL(mapped(QWidget*)),SLOT(ustawDate(QWidget*)));

    //connect(ui->button_dodaj,SIGNAL(clicked()),Wydatnik::getInstance(),SLOT(RefreshData()));
}

Rozchody::~Rozchody()
{
    delete ui;
}

void Rozchody::dodaj()
{

    QString temp;
    if(!Wydatnik::getInstance()->zalogowany())
    {
        Wydatnik::getInstance()->zaloguj();
    }
    if(Wydatnik::getInstance()->db->open() && Wydatnik::getInstance()->zalogowany())
    {
        int userid = Wydatnik::getInstance()->getUserid();





ui->label_5->setText(temp.setNum(ui->edit_kwota->text().toFloat()));
        if(ui->comboBox->currentIndex() == 0) //wychody
        {
            Wydatnik::getInstance()->db->exec("INSERT INTO expenses(userID, nazwa, kwota, data,opis,wydatek ) VALUES ('"+ temp.setNum(userid) +"','"+ui->edit_nazwa->text()+"','"+ui->label_5->text()+"','"+ui->dateEdit->date().toString("yyyy-MM-dd")+"','"+ui->edit_opis->text()+"','1')");
        }
        if(ui->comboBox->currentIndex() == 1) //przychody
        {
           Wydatnik::getInstance()->db->exec("INSERT INTO expenses(userID, nazwa, kwota, data,opis,wydatek ) VALUES ('"+ temp.setNum(userid) +"','"+ui->edit_nazwa->text()+"','"+ui->label_5->text()+"','"+ui->dateEdit->date().toString("yyyy-MM-dd")+"','"+ui->edit_opis->text()+"','0')");
        }
         Wydatnik::getInstance()->aktualizujSaldo();

        this->close();
        Wydatnik::getInstance()->RefreshData(Wydatnik::getInstance());
    }
    else
    {
        Wydatnik::getInstance()->DBError(Wydatnik::getInstance()->db->lastError());
    }

}
void Rozchody::ustawDate(QWidget* o)
{


QDate dataTmp;
    QDateEdit* dateEdit = dynamic_cast<QDateEdit*>(o);

    QCalendarWidget *calendar = new QCalendarWidget();
    calendar->setWindowFlags(Qt::WindowTitleHint);
    calendar->setGeometry(QRect(dateEdit->x(),dateEdit->y()+150,215,200));
    //calendar->setMaximumSize(210,200);

    calendar->show();
    calendar->setSelectedDate(dataTmp = dateEdit->date());
    connect(calendar,SIGNAL(clicked(QDate)),dateEdit,SLOT(setDate(QDate)));
    connect(calendar,SIGNAL(clicked(QDate)),calendar,SLOT(close()));



}
