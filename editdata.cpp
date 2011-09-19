#include "editdata.h"
#include "ui_editdata.h"

EditData::EditData(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditData)
{
    ui->setupUi(this);
}
EditData::EditData(QStringList& lista, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EditData)
{
    ui->setupUi(this);
    //w indeksie 0 jest id aktualnego wpisu

    id = lista.at(0);
    ui->id->setText(id);
    ui->edit_nazwa->setText(lista.at(1));
    ui->edit_kwota->setText(lista.at(2));
    ui->edit_data->setText(lista.at(3));
    ui->edit_opis->setText(lista.at(4));
    ui->comboBox->setCurrentIndex(lista.at(5).toInt());
    connect(ui->button_ok, SIGNAL(clicked()), this, SLOT(edit()));
    connect(ui->button_anuluj_2, SIGNAL(clicked()), this, SLOT(del()));
    connect(ui->button_anuluj, SIGNAL(clicked()), this, SLOT(close()));
    qDebug() << "lista.at(5) " << lista.at(5).toInt();
    for(int i=0; i<lista.size(); i++)
    {
        backup.append(lista.at(i));
    }





}

EditData::~EditData()
{
    delete ui;
}

void EditData::edit()
{
    QString temp;
qDebug() << "backup.at(5) " << backup.at(5).toInt();
    Wydatnik::getInstance()->ZapiszStan("UPDATE expenses SET nazwa='"+backup.at(1)+"', kwota="+backup.at(2)+", data='"+backup.at(3)+"', opis='"+backup.at(4)+"', wydatek="+temp.setNum(backup.at(5).toInt())+" WHERE id="+id+";");
    Wydatnik::getInstance()->db->exec("UPDATE expenses SET nazwa='"+ui->edit_nazwa->text()+"', kwota="+ui->edit_kwota->text()+", data='"+ui->edit_data->text()+"', opis='"+ui->edit_opis->text()+"', wydatek="+temp.setNum(ui->comboBox->currentIndex())+" WHERE id="+id+";");
   Wydatnik::getInstance()->aktualizujSaldo();
    this->close();
}
void EditData::del()
{
    QString temp;
    Wydatnik::getInstance()->ZapiszStan("INSERT INTO expenses(userID, nazwa, kwota, data,opis,wydatek ) VALUES ('"+ temp.setNum(Wydatnik::getInstance()->getUserid()) +"','"+backup.at(1)+"','"+backup.at(2)+"','"+backup.at(3)+"','"+backup.at(4)+"', '"+backup.at(5)+"');");

    Wydatnik::getInstance()->db->exec("DELETE FROM expenses WHERE id ='"+id+"';");
    Wydatnik::getInstance()->aktualizujSaldo();

    this->close();
}
