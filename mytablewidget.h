#ifndef MYTABLEWIDGET_H
#define MYTABLEWIDGET_H

#include <QTableWidget>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlRecord>
#include <QtSql/QSqlQuery>

#include <QtGui>

class MyTableWidget : public QTableWidget
{
    Q_OBJECT
public:
    MyTableWidget(QWidget *parent = 0);
    MyTableWidget(QWidget *parent,int row, int col);

    void wstawWierszZa(int index); //index = 0 wstawia wiersz na poczatku;
    void wstawWierszPrzed(int index);
    void wstawKolumneZa(int index); //index = 0 wstawia kolumne na poczatku;
    void wstawKolumnePrzed(int index);

    void wstawWidget(int row, int col, QWidget* widget);

    //void sqlQuery(QString query, QSqlDatabase const db);
    void sqlQuery(QSqlQuery const);
    void setHorizontalHeaderLabel(int col, const QString &label);
    void setVerticalHeaderLabel(int row, const QString &label);
    QStringList getHorizontalHederLabels();
private:
    QStringList HorizontalHeaderLabel;
    QStringList VerticalHeaderLabel;


};

#endif // MYTABLEWIDGET_H
