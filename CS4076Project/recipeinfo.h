#ifndef RECIPEINFO_H
#define RECIPEINFO_H

#include <QDialog>

namespace Ui {
class recipeInfo;
}

class recipeInfo : public QDialog
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
