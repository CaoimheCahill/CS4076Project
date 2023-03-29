#ifndef RECIPES_H
#define RECIPES_H
#include "recipeticket.h"
#include "filewriter.h"
#include <vector>

using namespace std;



class recipes
{
private:
    vector<Recipeticket> recipeList;
    filewriter writer;
public:
    recipes();
    ~recipes();
    recipes(vector<Recipeticket> recipes);
    void addRecipe(Recipeticket recipeticket, vector<Recipeticket> recipeList);
    void updateCSVfile(vector<Recipeticket> recipeList);
};

#endif // RECIPES_H
