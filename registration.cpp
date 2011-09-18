#include "registration.h"
#include "ui_registration.h"
#include <QMessageBox>

Registration::Registration(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::Registration)
{
    ui->setupUi(this);
    this->setMaximumSize(406,220);
    ui->edit_haslo->setEchoMode(QLineEdit::Password);
    ui->edit_haslo2->setEchoMode(QLineEdit::Password);
    //ui->button_register->setEnabled(true);

    connect(ui->edit_haslo2,SIGNAL(textEdited(QString)),this,SLOT(passwdCmp()));
    connect(ui->edit_email,SIGNAL(textEdited(QString)),this,SLOT(checkEmail()));
    connect(ui->edit_login,SIGNAL(textEdited(QString)),this,SLOT(checkLogin()));
    connect(ui->button_cancel,SIGNAL(clicked()),this,SLOT(anuluj()));
    connect(ui->button_register,SIGNAL(clicked()),this,SLOT(rejestruj()));
}

Registration::~Registration()
{
    delete ui;
}

bool Registration::passwdCmp()
{
    if(QString::compare(ui->edit_haslo->text(),ui->edit_haslo2->text()))
    {
        ui->label->setText("!");
        ui->label->setStyleSheet("QLabel{color: red}");
        return false;
    }
    else
    {
        ui->label->setText("*");
        ui->label->setStyleSheet("QLabel{color: green}");
        return true;
    }
}
void Registration::anuluj()
{
    this->close();
}
void Registration::rejestruj()
{
    if(checkLogin() && checkEmail() && passwdCmp())
    {
        //Wydatnik::getInstance()->db->open();
        QByteArray haslo = ui->edit_haslo->text().toUtf8();
        QCryptographicHash *hash = new QCryptographicHash(QCryptographicHash::Md5);
        hash->addData(haslo);
        QSqlQuery zapytanie("INSERT INTO users(login, password, email) VALUES ('"+ ui->edit_login->text()+"','"+hash->result().toHex()+"','"+ui->edit_email->text()+"');");
        this->close();
        if(zapytanie.numRowsAffected()!=0)
        {
            QMessageBox::information(0,"rejestracja","dodano nowego uzytkownika");
        }
        else
        {
            QMessageBox::warning(0,"rejestracja","rejestracja nie powiodla sie");
        }
    }
    else
        Wydatnik::getInstance()->Error("Podano niepoprawne dane");


}
bool Registration::checkEmail()
{
    //Wydatnik::getInstance()->db->open();
    QSqlQuery zapytanie("SELECT email FROM users WHERE email = '"+ ui->edit_email->text()+"';");
    if(zapytanie.numRowsAffected() != 0 || ui->edit_email->text().length() == 0 )
    {
        ui->label_2->setText("!");
        ui->label_2->setStyleSheet("QLabel{color: red}");
        return false;
    }
    else
    {
        ui->label_2->setText("*");
        ui->label_2->setStyleSheet("QLabel{color: green}");
        return true;
    }
    //Wydatnik::getInstance()->db->close();
}
bool Registration::checkLogin()
{
    //Wydatnik::getInstance()->db->open();
    QSqlQuery zapytanie("SELECT login FROM users WHERE login = '"+ ui->edit_login->text()+"';");
    if(zapytanie.numRowsAffected() != 0 || ui->edit_login->text().length() == 0 )
    {
        ui->label_3->setText("!");
        ui->label_3->setStyleSheet("QLabel{color: red}");
        return false;
    }
    else
    {
        ui->label_3->setText("*");
        ui->label_3->setStyleSheet("QLabel{color: green}");
        return true;
    }
    //Wydatnik::getInstance()->db->close();
}


