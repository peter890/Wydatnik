#ifndef FIRSTRUN_H
#define FIRSTRUN_H

#include <QWidget>

namespace Ui {
    class FirstRun;
}

class FirstRun : public QWidget
{
    Q_OBJECT

public:
    explicit FirstRun(QWidget *parent = 0);
    ~FirstRun();

private:
    Ui::FirstRun *ui;
private slots:
    void setNextIndex();

};

#endif // FIRSTRUN_H
