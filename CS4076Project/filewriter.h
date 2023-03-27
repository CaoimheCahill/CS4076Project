#ifndef FILEWRITER_H
#define FILEWRITER_H
#include <iostream>
#include <fstream>
#include <vector>
#include "recipeticket.h"

using namespace std;

class filewriter
{
public:
    filewriter();
    void writeRecipes(vector<Recipeticket> recipes);

private:
    ofstream writer;
    string line;
};

#endif // FILEWRITER_H
