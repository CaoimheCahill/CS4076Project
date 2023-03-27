#include "recipes.h"
#include "recipeticket.h"
#include "filewriter.h"
#include <vector>

using namespace std;

vector<Recipeticket> recipeList;
filewriter writer;

recipes::recipes()
   : recipeList(vector<Recipeticket>()), writer(filewriter()){

}

recipes::recipes(vector<Recipeticket> recipeList)
    : recipeList(recipeList), writer(filewriter()){
}

void updateCSVfile(){
    writer.writeRecipes(recipeList);
}

void addRecipe(Recipeticket recipeticket){
    recipeList.push_back(recipeticket);
    //updateCSVfile();
}
