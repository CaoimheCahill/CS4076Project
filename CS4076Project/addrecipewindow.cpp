#include "addrecipewindow.h"
#include "ui_addrecipewindow.h"
//#include <string>
#include "recipes.h"
#include "recipeticket.h"
#include "filereader.h"
#include "mainwindow.h"


using namespace std;

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



void addrecipewindow::on_buttonBox_accepted()
{
    vector<Recipeticket> recipeList;
    filereader *recipeFile = new filereader();
    recipeList = recipeFile->readRecipes();
    recipes *recipeSystem;
    recipeSystem = new recipes(recipeList);




    QString newName = ui->lineEdit->text();
    string name = newName.toStdString();

    QString newCalories = ui->lineEdit_2->text();
    int calories = newCalories.toInt();

    QString newDescription = ui->plainTextEdit->toPlainText();
    string description = newDescription.toStdString();

    QString newSteps = ui->plainTextEdit_2->toPlainText();
    string steps = newSteps.toStdString();

    string category;
    if(ui->radioButton->isChecked()){
        category = "Quick and Easy";
    }else if(ui->radioButton_2->isChecked()){
        category = "Healthy Dishes";
    }else if(ui->radioButton_3->isChecked()){
        category = "Vegaterian";
    }

    QList<QCheckBox *> checkBoxList = ui->scrollArea_3->findChildren<QCheckBox *>();
    QString checkedBoxes;

    for(QCheckBox *cboxes: checkBoxList){
        if(cboxes->isChecked()){
            checkedBoxes += cboxes->text() + " ";
        }
    }

    string ingrediants = checkedBoxes.toStdString();

    Recipeticket* newRecipe = new Recipeticket(category, name, description, ingrediants, steps, calories);
    recipeSystem->addRecipe(*newRecipe, recipeList);
    hide();
    MainWindow* mainWindow = new MainWindow(this);
    mainWindow->show();

}


void addrecipewindow::on_buttonBox_rejected()
{
    hide();
    MainWindow* mainWindow = new MainWindow(this);
    mainWindow->show();

}


