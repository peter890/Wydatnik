#ifndef MYCHECKBOX_H
#define MYCHECKBOX_H

#include <QCheckBox>

class MyCheckBox : public QCheckBox
{
    Q_OBJECT
public:
    explicit MyCheckBox(QWidget *parent = 0);
    MyCheckBox(int _id, int _row,  int _col, QWidget *parent = 0);
    MyCheckBox( int _row,int _col, QWidget *parent = 0);
    int getColNum(){return col;}
    int getRowNum(){return row;}
    int getId(){return id;}
private:
    int id;
    int col;
    int row;

signals:


public slots:


};

#endif // MYCHECKBOX_H
