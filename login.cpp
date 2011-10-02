#include "login.h"
#include "ui_login.h"
#include "wydatnik.h"

Login::Login(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
    this->setMaximumSize(364,171);
    QRect frect = frameGeometry();
    frect.moveCenter(QDesktopWidget().availableGeometry().center());
    move(frect.topLeft());



    ui->edit_haslo->setEchoMode(QLineEdit::Password);
    ui->button_zaloguj->setFocusPolicy(Qt::TabFocus);
    connect(ui->button_zaloguj,SIGNAL(clicked()),this,SLOT(zaloguj()));
    connect(ui->button_anuluj,SIGNAL(clicked()),this,SLOT(anuluj()));
   //connect(ui->label_register, SIGNAL(linkActivated(QString)), Wydatnik::getInstance(), SLOT(rejestracja()));
    setTabOrder(ui->edit_login, ui->edit_haslo);
    setTabOrder(ui->button_zaloguj, ui->button_anuluj);
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
        Wydatnik::getInstance()->show();
        this->close();
    }
}
void Login::anuluj()
{
    this->close();
}

void Login::keyPressEvent(QKeyEvent *k)
{

    switch(k->key())
    {
    case 16777220:
    {
        zaloguj();
        break;

    }
    case Qt::Key_Escape:
    {
        anuluj();
        break;
    }
    }


}
