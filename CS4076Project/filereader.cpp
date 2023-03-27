#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include "filereader.h"
#include "recipeticket.h"

using namespace std;

filereader::filereader()
{
    stream = ifstream();

}

vector<Recipeticket> filereader::readRecipes(){
    try {
        stream.open("Recipes.csv");
        vector<Recipeticket> recipes;

        while(getline(stream, line)){
            int commaIndex = line.find(",");
            category = line.substr(0, commaIndex);
            name = line.substr(commaIndex + 1);
            description = line.substr(commaIndex + 2);
            ingrediants = line.substr(commaIndex + 3);
            steps = line.substr(commaIndex + 4);
            calories = (stoi(line.substr(commaIndex + 5)));

            recipes.push_back(Recipeticket(category, name, description, ingrediants, steps, calories));
        }

        return recipes;
    } catch (...) {
        cerr << "Error opening/reading file";
    }

}
