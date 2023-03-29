#include "recipes.h"
#include "recipeticket.h"
#include "filewriter.h"
#include <vector>

using namespace std;

 filewriter writer;

recipes::recipes()
   : recipeList(vector<Recipeticket>()), writer(filewriter()){}

recipes::recipes(vector<Recipeticket> recipeList)
    : recipeList(recipeList), writer(filewriter()){}

recipes::~recipes(){};

void recipes::updateCSVfile(vector<Recipeticket> recipeList){
    writer.writeRecipes(recipeList);
}

void recipes::addRecipe(Recipeticket recipeticket, vector<Recipeticket> recipeList){
    recipeList.push_back(recipeticket);
    updateCSVfile(recipeList);
}
