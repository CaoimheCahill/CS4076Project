#ifndef RECIPEINFO_H
#define RECIPEINFO_H

#include "invalidinputexception.h"
#include <QDialog>
#include <QToolButton>
#include <QStackedWidget>

namespace Ui {
class recipeInfo;
}

class recipeInfo : public QDialog, public invalidInputException
{
    Q_OBJECT

public:
    explicit recipeInfo(QString recipeName, QWidget *parent = nullptr);
    ~recipeInfo();


private:
    Ui::recipeInfo *ui;
    QString newRecipeName;

};

#endif // RECIPEINFO_H
