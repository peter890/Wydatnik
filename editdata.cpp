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



}

EditData::~EditData()
{
    delete ui;
}

void EditData::edit()
{
    QString tmp;
    qDebug() << "UPDATE `expenses` SET nazwa='"+ui->edit_nazwa->text()+"', kwota="+ui->edit_kwota->text()+", data='"+ui->edit_data->text()+"', opis='"+ui->edit_opis->text()+"', wydatek="+tmp.setNum(ui->comboBox->currentIndex())+" WHERE id="+id+";";
Wydatnik::getInstance()->db->exec("UPDATE expenses SET nazwa='"+ui->edit_nazwa->text()+"', kwota="+ui->edit_kwota->text()+", data='"+ui->edit_data->text()+"', opis='"+ui->edit_opis->text()+"', wydatek="+tmp.setNum(ui->comboBox->currentIndex())+" WHERE id="+id+";");
this->close();
}
void EditData::del()
{
    Wydatnik::getInstance()->db->exec("DELETE FROM expenses WHERE id ='"+id+"';");
    this->close();
}
