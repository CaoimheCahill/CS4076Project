#ifndef FILEREADER_H
#define FILEREADER_H

#include <QFile>
#include <QStringList>
#include <vector>
#include "invalidinputexception.h"
#include "recipeticket.h"

using namespace std;


class filereader : public invalidInputException
{
public:
    filereader();
    vector<Recipeticket> readRecipes();
    ~filereader();

private:

    QFile file;
    QString filename;
    QString line, location, category, name, description, ingrediants, steps;
    int calories;
};

#endif // FILEREADER_H
