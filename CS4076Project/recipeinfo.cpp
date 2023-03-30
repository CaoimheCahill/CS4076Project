#include "recipeinfo.h"
#include "filereader.h"
#include "quickandeasy.h"
#include "recipeticket.h"
#include "ui_recipeinfo.h"

recipeInfo::recipeInfo(QString recipeName, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::recipeInfo),
    newRecipeName(recipeName)

{
    ui->setupUi(this);


    vector<Recipeticket> recipeList;
    filereader *recipeFile = new filereader();
    recipeList = recipeFile->readRecipes();

    bool recipeFound = false;
    for(Recipeticket r : recipeList){
        if(r.getName() == (recipeName).toStdString()){
            ui->label->setText(QString::fromStdString(r.getName()));
            ui->label_2->setText(QString::fromStdString(r.getDescription()));
            ui->label_3->setText(QString::fromStdString(r.getSteps()));
            ui->label_4->setText(QString::fromStdString(r.getIngrediants()));
            ui->label_5->setText(QString::fromStdString(r.getCategory()));
            ui->label_6->setText(QString::fromStdString(to_string(r.getCalories())));
            ui->label_13->setText(QString::fromStdString(r.getDifficulty()));

            recipeFound = true;
            break;
        }
    }
    if(!recipeFound){
        throw invalidInputException("Error trying to display recipe");
    }
}

recipeInfo::~recipeInfo()
{
    delete ui;
}




void recipeInfo::on_pushButton_clicked()
{
    hide();
    QuickAndEasy* back = new QuickAndEasy(this);
    back->show();
}


