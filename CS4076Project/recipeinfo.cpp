#include "recipeinfo.h"
#include "filereader.h"
#include "recipeticket.h"
#include "ui_recipeinfo.h"

recipeInfo::recipeInfo(QString recipeName, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recipeInfo),
    newRecipeName(recipeName)

{
    ui->setupUi(this);

    //ui->label->setText(recipeName);
    vector<Recipeticket> recipeList;
    filereader *recipeFile = new filereader();
    recipeList = recipeFile->readRecipes();

    for(Recipeticket r : recipeList){
        if(r.getName() == (recipeName).toStdString()){
            ui->label->setText(QString::fromStdString(r.getName()));
            ui->label_2->setText(QString::fromStdString(r.getDescription()));
            ui->label_3->setText(QString::fromStdString(r.getSteps()));
            ui->label_4->setText(QString::fromStdString(r.getIngrediants()));
            ui->label_5->setText(QString::fromStdString(r.getCategory()));
            ui->label_6->setText(QString::fromStdString(to_string(r.getCalories())));
        } //NB Exception


    }
}

recipeInfo::~recipeInfo()
{
    delete ui;
}
