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
     QTextCodec::setCodecForTr (QTextCodec::codecForName ("UTF-8"));
    ui->setupUi(this);
    QRect frect = frameGeometry();
    frect.moveCenter(QDesktopWidget().availableGeometry().center());
    move(frect.topLeft());


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
    if(!confirm())
        return;
    QString temp;
    qDebug() << "backup.at(5) " << backup.at(5).toInt();
    Wydatnik::getInstance()->ZapiszStan("UPDATE expenses SET nazwa='"+backup.at(1)+"', kwota="+backup.at(2)+", data='"+backup.at(3)+"', opis='"+backup.at(4)+"', wydatek="+temp.setNum(backup.at(5).toInt())+" WHERE id="+id+";");
    Wydatnik::getInstance()->db->exec("UPDATE expenses SET nazwa='"+ui->edit_nazwa->text()+"', kwota="+ui->edit_kwota->text()+", data='"+ui->edit_data->text()+"', opis='"+ui->edit_opis->text()+"', wydatek="+temp.setNum(ui->comboBox->currentIndex())+" WHERE id="+id+";");
    Wydatnik::getInstance()->aktualizujSaldo();
    Wydatnik::getInstance()->wyszukaj();
    this->close();
}
void EditData::del()
{
    if(!confirm())
        return;
    QString temp;
    Wydatnik::getInstance()->ZapiszStan("INSERT INTO expenses(userID, nazwa, kwota, data,opis,wydatek ) VALUES ('"+ temp.setNum(Wydatnik::getInstance()->getUserid()) +"','"+backup.at(1)+"','"+backup.at(2)+"','"+backup.at(3)+"','"+backup.at(4)+"', '"+backup.at(5)+"');");

    Wydatnik::getInstance()->db->exec("DELETE FROM expenses WHERE id ='"+id+"';");
    Wydatnik::getInstance()->aktualizujSaldo();
    Wydatnik::getInstance()->wyszukaj();
    this->close();
}
bool EditData::confirm()
{
    QMessageBox msgBox;
    msgBox.setText(tr("Wybrana treść zostanie zmodyfikowana"));
    msgBox.setInformativeText(tr("Czy napewno chcesz dokonać zmian?"));
    msgBox.setStandardButtons(QMessageBox::No | QMessageBox::Yes);
    //int ret = msgBox.exec()
    switch(msgBox.exec())
    {
    case QMessageBox::Yes:
        return true;
        break;
    case QMessageBox::No:
        return false;
        break;
    }
    return false;
}
void EditData::keyPressEvent(QKeyEvent *k)
{
    switch(k->key())
    {
    case 16777220: //enter
        edit();
        break;
    case Qt::Key_Delete:
        del();
        break;
    case Qt::Key_Escape:
        this->close();
        break;
    }
}
