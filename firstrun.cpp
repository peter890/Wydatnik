#include "firstrun.h"
#include "ui_firstrun.h"

FirstRun::FirstRun(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::FirstRun)
{
    ui->setupUi(this);

    connect(ui->Bnext, SIGNAL(clicked()), this, SLOT(setNextIndex()));
}

FirstRun::~FirstRun()
{
    delete ui;
}

void FirstRun::setNextIndex()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex()+1);
}
