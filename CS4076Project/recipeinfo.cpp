#include "recipeinfo.h"
#include "ui_recipeinfo.h"

recipeInfo::recipeInfo(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recipeInfo)
{
    ui->setupUi(this);
}

recipeInfo::~recipeInfo()
{
    delete ui;
}
