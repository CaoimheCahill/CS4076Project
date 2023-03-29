#include <string>
#include <vector>
#include <QFile>
#include <QTextStream>
#include "recipeticket.h"
#include "filewriter.h"

using namespace std;

filewriter::filewriter()
{
  QFile file("C:/Users/caoim/CS4076Project/CS4076Project/CS4076Project/Images/Recipes.csv");
}

filewriter::~filewriter(){}

void filewriter::writeRecipes(vector<Recipeticket> recipeList)
{
    QFile file("C:/Users/caoim/CS4076Project/CS4076Project/CS4076Project/Images/Recipes.csv");

    if(!file.open(QFile::WriteOnly | QFile::Text)){
        throw invalidInputException("Error opening file");
    }

    QTextStream out(&file);
    for(Recipeticket recipe : recipeList){
        QString line = QString::fromStdString(recipe.getCategory() + "," + recipe.getName() + "," + recipe.getDescription() + "," + recipe.getIngrediants() + "," + recipe.getSteps() + "," + to_string(recipe.getCalories()) + "," + recipe.getDifficulty());
        out << line << "\n";
    }
    file.flush();
    file.close();
}


