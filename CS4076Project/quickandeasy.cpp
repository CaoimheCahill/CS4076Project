#include "quickandeasy.h"
#include "ui_quickandeasy.h"
#include "recipeticket.h"
#include "filereader.h"

QuickAndEasy::QuickAndEasy(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::QuickAndEasy)
{
    ui->setupUi(this);

    container = new QWidget(this);
    scrollArea = new QScrollArea(this);
    scrollArea->setWidget(container);
    scrollArea->setWidgetResizable(true);
    lay = new QVBoxLayout(container);

    vector<Recipeticket> recipeList;
    filereader *recipeFile = new filereader();
    recipeList = recipeFile->readRecipes();

    for(Recipeticket r : recipeList){
        QPushButton* button = new QPushButton(QString::fromStdString(r.getName()), scrollArea);
        lay->addWidget(button);
    }

    //container->setCentralWidget(scrollArea);


}

QuickAndEasy::~QuickAndEasy()
{
    delete ui;
}
