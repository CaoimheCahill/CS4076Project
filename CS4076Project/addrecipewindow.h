#ifndef ADDRECIPEWINDOW_H
#define ADDRECIPEWINDOW_H

#include <QDialog>

namespace Ui {
class addrecipewindow;
}

class addrecipewindow : public QDialog
{
    Q_OBJECT

public:
    explicit addrecipewindow(QWidget *parent = nullptr);
    ~addrecipewindow();

private:
    Ui::addrecipewindow *ui;
};

#endif // ADDRECIPEWINDOW_H
