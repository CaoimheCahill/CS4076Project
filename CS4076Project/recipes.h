#ifndef RECIPES_H
#define RECIPES_H
#include "recipeticket.h"
#include <vector>

using namespace std;



class recipes
{
private:
    vector<Recipeticket> recipeList;
public:
    recipes();
    void addRecipe(Recipeticket recipeticket);
};

#endif // RECIPES_H
