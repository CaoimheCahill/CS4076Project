#include "recipeticket.h"
#include <string.h>
using namespace std;

Recipeticket::Recipeticket(string category, string name, string description, string ingrediants, string steps, int calories)
{
    this->category = category;
    this->name = name;
    this->description = description;
    this->ingrediants = ingrediants;
    this->steps = steps;
    this->calories = calories;
}

string Recipeticket::getCategory(){
    return category;
}

void Recipeticket::setCategory(string category){
    this->category = category;
}

string Recipeticket::getName(){
    return name;
}

void Recipeticket::setName(string name){
    this->name = name;
}

string Recipeticket::getDescription(){
    return description;
}

void Recipeticket::setDescription(string description){
    this->description = description;
}

string Recipeticket::getIngrediants(){
    return ingrediants;
}

void Recipeticket::setIngrediants(string ingrediants){
    this->ingrediants = ingrediants;
}

string Recipeticket::getSteps(){
    return steps;
}

void Recipeticket::setSteps(string steps){
    this->steps = steps;
}

int Recipeticket::getCalories(){
    return calories;
}

void Recipeticket::setCalories(int calories){
    this->calories = calories;
}


