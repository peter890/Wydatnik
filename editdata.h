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
protected:
    virtual void keyPressEvent(QKeyEvent *);

private:
    Ui::EditData *ui;
    QString id;
    QStringList backup;
private slots:
    void edit();
    void del();
    bool confirm();
};

#endif // EDITDATA_H
