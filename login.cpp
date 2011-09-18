#include "login.h"
#include "ui_login.h"
#include "wydatnik.h"

Login::Login(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setMaximumSize(364,171);

    ui->edit_haslo->setEchoMode(QLineEdit::Password);
    ui->button_zaloguj->setFocusPolicy(Qt::TabFocus);
    connect(ui->button_zaloguj,SIGNAL(clicked()),this,SLOT(zaloguj()));
    connect(ui->button_anuluj,SIGNAL(clicked()),this,SLOT(anuluj()));
}

Login::~Login()
{
    delete ui;
}
void Login::zaloguj()
{

    QString login = ui->edit_login->text();
    QByteArray haslo = ui->edit_haslo->text().toUtf8();
    QCryptographicHash *hash = new QCryptographicHash(QCryptographicHash::Md5);
    hash->addData(haslo);

    if(Wydatnik::getInstance()->zaloguj(login, hash->result().toHex()))
    {
         this->close();
    }
}
void Login::anuluj()
{
    this->close();
}

