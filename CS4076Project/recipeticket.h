#ifndef RECIPETICKET_H
#define RECIPETICKET_H

#include <string>
using namespace std;


class Recipeticket
{
public:
    Recipeticket();
    Recipeticket(string category, string name, string description, string ingrediants, string steps, int calories, string difficulty );
    string getCategory();
    void setCategory(string newCategory);
    string getName();
    void setName(string newName);
    string getDescription();
    void setDescription(string newDescription);
    string getIngrediants();
    void setIngrediants(string newIngrediants);
    string getSteps();
    void setSteps(string newSteps);
    int getCalories();
    void setCalories(int newCalories);
    string getDifficulty();
    void setDifficulty(string difficulty);
    string toString();


private:
    string category;
    string name;
    string description;
    string ingrediants;
    string steps;
    string difficulty;
    int calories;
};

#endif // RECIPETICKET_H
