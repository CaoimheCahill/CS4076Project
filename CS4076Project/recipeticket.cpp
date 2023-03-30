#include "recipeticket.h"
#include <string.h>
using namespace std;

Recipeticket::Recipeticket() : category(""), name(""), description(""), ingrediants(""), steps(""), calories(0) {}

Recipeticket::Recipeticket(string category, string name, string description, string ingrediants, string steps, int calories, string difficulty)
: category(category), name(name), description(description), ingrediants(ingrediants), steps(steps), calories(calories), difficulty(difficulty){}


Recipeticket::Recipeticket(const Recipeticket& other)
    : category(other.category), name(other.name), description(other.description), ingrediants(other.ingrediants), steps(other.steps), calories(other.calories), difficulty(other.difficulty){}

Recipeticket::~Recipeticket(){}

//compare recipes by name
bool operator==(const string& recipeName, const string& recipeName2){
    return recipeName.compare(recipeName2) == 0;
}

string Recipeticket::getCategory(){
    return category;
}



string Recipeticket::getName(){
    return name;
}


string Recipeticket::getDescription(){
    return description;
}


string Recipeticket::getIngrediants(){
    return ingrediants;
}


string Recipeticket::getSteps(){
    return steps;
}



int Recipeticket::getCalories(){
    return calories;
}

string Recipeticket::getDifficulty(){
    return difficulty;
}




