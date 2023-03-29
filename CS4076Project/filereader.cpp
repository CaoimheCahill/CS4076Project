#include <iostream>
#include <fstream>
#include <vector>
#include <QFile>
#include <QTextStream>
#include <string>
#include "filereader.h"
#include "recipeticket.h"
#include <QMessageBox>

using namespace std;

filereader::filereader()
{
   QFile file(":/resources/Images/Recipes.csv");

}

filereader::~filereader(){}

vector<Recipeticket> filereader::readRecipes(){
    QFile file("C:/Users/caoim/CS4076Project/CS4076Project/CS4076Project/Images/Recipes.csv");
    try {
        if(!file.open(QFile::ReadOnly | QFile :: Text)){
            throw invalidInputException("Error Opening File");
        }

        vector<Recipeticket> recipes;
        QTextStream in(&file);

        while(!in.atEnd()){
            QString line = in.readLine();
            QStringList fields = line.split(",");
            if(fields.size() != 7){
                throw invalidInputException("Error: some lines are wrong");
                continue;
            }
            QString category = fields.at(0);
            QString name = fields.at(1);
            QString description = fields.at(2);
            QString ingrediants = fields.at(3);
            QString steps = fields.at(4);
            int calories = fields.at(5).toInt();
            QString difficulty = fields.at(6);
            recipes.push_back(Recipeticket(category.toStdString(), name.toStdString(), description.toStdString(), ingrediants.toStdString(), steps.toStdString(), calories, difficulty.toStdString()));
        }
        file.flush();
        file.close();
        return recipes;
    } catch ( invalidInputException& e) {
        QMessageBox::warning(nullptr, "Error", e.what());

    }

}
