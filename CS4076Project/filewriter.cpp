#include "filewriter.h"

filewriter::filewriter()
{
    writer = ofstream(":/resources/Images/Recipes.csv");

}

void filewriter::writeRecipes(vector<Recipeticket> recipes){
    try {
        for(Recipeticket r : recipes){
            line = r.getCategory() + "," + r.getName() + "," + r.getDescription() + "," + r.getIngrediants() + "," + r.getSteps() + "," + to_string(r.getCalories());
            writer << line << endl;
        }
    }catch (...) {
        cerr << "Error writing into file";
    }
}

