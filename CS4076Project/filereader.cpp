#include <iostream>
#include <fstream>
#include <vector>
#include <QFile>
#include <QTextStream>
#include <string>
#include "filereader.h"
#include "recipeticket.h"

using namespace std;

filereader::filereader()
{
    //QFile file(":/resources/Images/Recipes.csv");

}

vector<Recipeticket> filereader::readRecipes(){
    QFile file("C:/Users/caoim/CS4076Project/CS4076Project/CS4076Project/Images/Recipes.csv");
    try {
        if(!file.open(QFile::ReadOnly | QFile :: Text)){
            cerr << "Error opening file";
            return vector<Recipeticket>();
        }

        vector<Recipeticket> recipes;
        QTextStream in(&file);

        while(!in.atEnd()){
            QString line = in.readLine();
            QStringList fields = line.split(",");
            if(fields.size() != 6){
                cerr << "Invalid line format: " << line.toStdString() << endl;
                continue;
            }
            QString category = fields.at(0);
            QString name = fields.at(1);
            QString description = fields.at(2);
            QString ingrediants = fields.at(3);
            QString steps = fields.at(4);
            int calories = fields.at(5).toInt();
            recipes.push_back(Recipeticket(category.toStdString(), name.toStdString(), description.toStdString(), ingrediants.toStdString(), steps.toStdString(), calories));
        }
        file.flush();
        file.close();
        return recipes;
    } catch (...) {
        cerr << "Error opening/reading file";
        return vector<Recipeticket>();
    }

}
