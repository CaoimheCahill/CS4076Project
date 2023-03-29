#ifndef FILEWRITER_H
#define FILEWRITER_H
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <vector>
#include "invalidinputexception.h"
#include "recipeticket.h"

using namespace std;

class filewriter : public invalidInputException
{
public:
    filewriter();
    void writeRecipes(vector<Recipeticket> recipes);
    ~filewriter();

private:
    QFile file;
    QTextStream out;
};

#endif // FILEWRITER_H
