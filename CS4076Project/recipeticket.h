#ifndef RECIPETICKET_H
#define RECIPETICKET_H

#include <string>
using namespace std;


class Recipeticket
{
public:
    Recipeticket();
    Recipeticket(string category, string name, string description, string ingrediants, string steps, int calories, string difficulty );
    Recipeticket(const Recipeticket& other);
    ~Recipeticket();
    string getCategory();
    string getName();
    string getDescription();
    string getIngrediants();
    string getSteps();
    int getCalories();
    string getDifficulty();


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
