#ifndef RECIPEINFO_H
#define RECIPEINFO_H

#include <QDialog>
#include <QToolButton>
#include <QStackedWidget>

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

private slots:
    void goBack();

};

#endif // RECIPEINFO_H
