#include "quickandeasy.h"
#include "mainwindow.h"
#include "recipeinfo.h"
#include "ui_quickandeasy.h"
#include "recipeticket.h"
#include "filereader.h"


QuickAndEasy::QuickAndEasy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuickAndEasy)
{
    ui->setupUi(this);

    container = ui->widget;
    scrollArea = ui->scrollArea;
    container->setParent(scrollArea);
    scrollArea->setWidget(container);

    lay = new QVBoxLayout(container);

    vector<Recipeticket> recipeList;
    filereader *recipeFile = new filereader();
    recipeList = recipeFile->readRecipes();

    for(Recipeticket r : recipeList){
        QPushButton* button = new QPushButton(QString::fromStdString(r.getName()), scrollArea);
        lay->addWidget(button);
        connect(button, &QPushButton::clicked, this, &QuickAndEasy::showRecipeDetails);
    }

    delete recipeFile;

}

QuickAndEasy::~QuickAndEasy()
{
    delete ui;
}

void QuickAndEasy::showRecipeDetails(){

    QPushButton *button = qobject_cast<QPushButton*>(sender());
    if(button){
        QString buttonName = button->text();
        hide();
        recipeInfo *recipeinfo = new recipeInfo(buttonName);
        recipeinfo->show();
    }


}


void QuickAndEasy::on_pushButton_clicked()
{
    hide();
    MainWindow* mainWindow = new MainWindow(this);
    mainWindow->show();
}

