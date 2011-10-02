#include "registration.h"
#include "ui_registration.h"
#include <QMessageBox>

Registration::Registration(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::Registration)
{
    ui->setupUi(this);
    QRect frect = frameGeometry();
    frect.moveCenter(QDesktopWidget().availableGeometry().center());
    move(frect.topLeft());

    this->setMaximumSize(406,220);
    ui->edit_haslo->setEchoMode(QLineEdit::Password);
    ui->edit_haslo2->setEchoMode(QLineEdit::Password);

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
        ui->edit_haslo2->setStyleSheet("QLineEdit {background-color: qlineargradient(spread:repeat, x1:0.346, y1:0, x2:0.359, y2:1, stop:0 rgba(255, 0, 0, 183), stop:1 rgba(255, 255, 255, 255));");
        return false;
    }
    else
    {
        ui->edit_haslo2->setStyleSheet("QLineEdit{ background-color: qlineargradient(spread:repeat, x1:0.346, y1:0, x2:0.359, y2:1, stop:0 rgba(138, 255, 0, 183), stop:1 rgba(255, 255, 255, 255));}");
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
        QByteArray haslo = ui->edit_haslo->text().toUtf8();
        QCryptographicHash *hash = new QCryptographicHash(QCryptographicHash::Md5);
        hash->addData(haslo);
        QSqlQuery zapytanie("INSERT INTO users(login, password, email) VALUES ('"+ ui->edit_login->text()+"','"+hash->result().toHex()+"','"+ui->edit_email->text()+"');");
        this->close();
        if(zapytanie.numRowsAffected()!=0)
        {
            QMessageBox::information(0,"rejestracja","dodano nowego uzytkownika\n zalogowano automatycznie");
            Wydatnik::getInstance()->zaloguj(ui->edit_login->text(),hash->result().toHex());
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
    QSqlQuery zapytanie("SELECT email FROM users WHERE email = '"+ ui->edit_email->text()+"';");
    if(zapytanie.numRowsAffected() != 0 || ui->edit_email->text().length() == 0 )
    {
        ui->edit_email->setStyleSheet("QLineEdit{ background-color: qlineargradient(spread:repeat, x1:0.346, y1:0, x2:0.359, y2:1, stop:0 rgba(255, 0, 0, 183), stop:1 rgba(255, 255, 255, 255));}");
        return false;
    }
    else
    {
        ui->edit_email->setStyleSheet("QLineEdit{ background-color: qlineargradient(spread:repeat, x1:0.346, y1:0, x2:0.359, y2:1, stop:0 rgba(138, 255, 0, 183), stop:1 rgba(255, 255, 255, 255));}");
        return true;
    }

}
bool Registration::checkLogin()
{
    QSqlQuery zapytanie("SELECT login FROM users WHERE login = '"+ ui->edit_login->text()+"';");
    if(zapytanie.numRowsAffected() != 0 || ui->edit_login->text().length() == 0 )
    {
        ui->edit_login->setStyleSheet("QLineEdit{ background-color: qlineargradient(spread:repeat, x1:0.346, y1:0, x2:0.359, y2:1, stop:0 rgba(255, 0, 0, 183), stop:1 rgba(255, 255, 255, 255));}");
        return false;
    }
    else
    {
        ui->edit_login->setStyleSheet("QLineEdit{ background-color: qlineargradient(spread:repeat, x1:0.346, y1:0, x2:0.359, y2:1, stop:0 rgba(138, 255, 0, 183), stop:1 rgba(255, 255, 255, 255));}");
        return true;
    }   
}


