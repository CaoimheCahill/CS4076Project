#ifndef FILEWRITER_H
#define FILEWRITER_H
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <vector>
#include "recipeticket.h"

using namespace std;

class filewriter
{
public:
    filewriter();
    void writeRecipes(vector<Recipeticket> recipes);

private:
    QFile file;
    QTextStream out;
};

#endif // FILEWRITER_H
