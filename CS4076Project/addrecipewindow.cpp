#include "addrecipewindow.h"
#include "ui_addrecipewindow.h"

addrecipewindow::addrecipewindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::addrecipewindow)
{
    ui->setupUi(this);
}

addrecipewindow::~addrecipewindow()
{
    delete ui;
}
