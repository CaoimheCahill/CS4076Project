#ifndef FILEREADER_H
#define FILEREADER_H

#include <fstream>
#include <string>
#include <vector>
#include "recipeticket.h"

using namespace std;


class filereader
{
public:
    filereader();
    vector<Recipeticket> readRecipes();

private:

    ifstream stream;
    string line, location, category, name, description, ingrediants, steps;
    int calories;
};

#endif // FILEREADER_H
