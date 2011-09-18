#include "mycheckbox.h"
#include <QDebug>

MyCheckBox::MyCheckBox(QWidget *parent) :
    QCheckBox(parent)
{

}
MyCheckBox::MyCheckBox(int _id,  int _row,int _col, QWidget *parent):QCheckBox(parent),id(_id),col(_col), row(_row)
{

}
MyCheckBox::MyCheckBox(int _row, int _col, QWidget *parent):QCheckBox(parent),col(_col), row(_row)
{

}

