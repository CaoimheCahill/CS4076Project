#include "quickandeasy.h"
#include "ui_quickandeasy.h"

QuickAndEasy::QuickAndEasy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuickAndEasy)
{
    ui->setupUi(this);
}

QuickAndEasy::~QuickAndEasy()
{
    delete ui;
}
