#include "mytablewidget.h"

MyTableWidget::MyTableWidget(QWidget *parent) :
    QTableWidget(parent)
{
}
MyTableWidget::MyTableWidget(QWidget *parent, int row, int col) :
    QTableWidget(row, col, parent)
{

}

void MyTableWidget::wstawKolumneZa(int index)
{
    this->insertColumn(index);
}
void MyTableWidget::wstawKolumnePrzed(int index)
{
    if(index >= 1)
        this->insertColumn(index-1);
}
void MyTableWidget::wstawWierszZa(int index)
{
    this->insertRow(index);
}
void MyTableWidget::wstawWierszPrzed(int index)
{
    if(index >= 1)
        this->insertRow(index-1);
}
void MyTableWidget::wstawWidget(int row, int col, QWidget* widget)
{
    this->setCellWidget(row, col, widget);
}

void MyTableWidget::sqlQuery(QSqlQuery zapytanie)
{


    this->clear();
    QSqlRecord *rec = new QSqlRecord;
    *rec = zapytanie.record();
    this->setRowCount(zapytanie.numRowsAffected());
    this->setColumnCount(rec->count());


    HorizontalHeaderLabel << "";
    for(int i=1; i<=rec->count(); ++i)
    {
        HorizontalHeaderLabel << rec->fieldName(i);

    }
    this->setHorizontalHeaderLabels(HorizontalHeaderLabel);
    QTableWidgetItem* widgetItem;
    int wiersz = this->currentRow()+1;

    while(zapytanie.next())
    {

        for(int i = 1; i < this->columnCount(); ++i)
        {
            widgetItem = new QTableWidgetItem(QTableWidgetItem::UserType);
            widgetItem->setText(zapytanie.value(i).toString());
            widgetItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
            this->setItem(wiersz,i,widgetItem);
        }
        ++wiersz;


    }
    zapytanie.exec();
}

void MyTableWidget::setHorizontalHeaderLabel(int col, const QString &label)
{
    if(HorizontalHeaderLabel.count() <= this->columnCount() )
    {
        QStringList::iterator it;
        it= HorizontalHeaderLabel.begin();

        HorizontalHeaderLabel.insert(it+col,label);
        for(int i=0; i<HorizontalHeaderLabel.count(); i++)
        {
            qDebug() << i <<". " <<HorizontalHeaderLabel[i] << "/n";
        }
        this->setHorizontalHeaderLabels(HorizontalHeaderLabel);
    }


}
void MyTableWidget::setVerticalHeaderLabel(int row, const QString &label)
{
    if(VerticalHeaderLabel.count() <= this->rowCount() )
    {
        QStringList::iterator it;
        it= VerticalHeaderLabel.begin();

        VerticalHeaderLabel.insert(it+row,label);
        for(int i=0; i<VerticalHeaderLabel.count(); i++)
        {
            qDebug() << i <<". " <<VerticalHeaderLabel[i] << "/n";
        }
        this->setVerticalHeaderLabels(VerticalHeaderLabel);
    }


}
QStringList MyTableWidget::getHorizontalHederLabels()
{
    return HorizontalHeaderLabel;
}

