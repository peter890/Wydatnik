#ifndef WYDATNIK_H
#define WYDATNIK_H

#include <QtGui>
#include <QMainWindow>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlQueryModel>
#include <QSqlError>
#include<QtSql>
#include <QDebug>
#include <QMessageBox>
#include <QTextCodec>
#include <QDate>
#include <QCalendarWidget>
#include <QDateEdit>
#include <QSignalMapper>
#include <QSettings>



#include <vector>
#include <QList>

#include "login.h"
#include "registration.h"
#include "rozchody.h"
#include "wykres.h"
#include "obserwator.h"
#include "obserwowany.h"
#include "firstrun.h"

using namespace std;

namespace Ui {
    class Wydatnik;
}
class Login;
class Registration;
class Rozchody;
class Wydatnik : public QMainWindow , public Obserwowany
{
    Q_OBJECT


public:

    static Wydatnik* getInstance();
    bool zalogowany();

    bool zaloguj(QString _login, QString _haslo);
    int getUserid();
    QSqlDatabase* db;
    QSignalMapper* signalMapper;
    bool connectDB(QString _hostname, QString _username, QString _password, QString _dbname);
    void DBError(QSqlError _error);
    void Error(QString _error);
    void exec(QString _query);
    void zaladujDane(QSqlQuery zapytanie);
    virtual void dodajObserwatora(Obserwator *);
    virtual void usunObserwatora(Obserwator *);
    vector<Dane*> getData();




    ~Wydatnik();

private:
    Ui::Wydatnik *ui;
    explicit Wydatnik(QWidget *parent = 0);
    static bool exists;
    static Wydatnik* instance;
    QList<Obserwator*>Obserwatorzy;

    int userid;
    bool connected;
    QSqlQueryModel *queryModel;
    Login* login;
    Registration* registration;
    Rozchody* rozchody;
    vector<Dane*> dane;
    QCalendarWidget* calendar;
    void zaladujPolaczenia();
    FirstRun* firstrun;




public slots:
    void wyloguj();
    void zaloguj();
    void rejestracja();
    void dodajWydatek();
    void ustawDate(QWidget* o);
    void RefreshData(Obserwowany *o);
private slots:

    void changeConnection(bool _connected);
    void zmienStan(bool);
    void wyszukaj();

signals:
    void changedConnection(bool _connected);

};




#endif // WYDATNIK_H
