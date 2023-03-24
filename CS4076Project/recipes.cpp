#include "recipes.h"
#include "recipeticket.h"
#include <vector>

using namespace std;

vector<Recipeticket> recipeList;

recipes::recipes(){

}

void addRecipe(Recipeticket recipeticket){
    recipeList.push_back(recipeticket);
}
