#ifndef EDITDATA_H
#define EDITDATA_H

#include <QWidget>
#include <QStringList>
#include <QDebug>
#include "wydatnik.h"

namespace Ui {
    class EditData;
}

class EditData : public QWidget
{
    Q_OBJECT

public:
    EditData(QWidget *parent = 0);
    EditData(QStringList& lista, QWidget *parent = 0);


    ~EditData();

private:
    Ui::EditData *ui;
    QString id;
private slots:
    void edit();
    void del();
};

#endif // EDITDATA_H