#ifndef ADDRECIPEWINDOW_H
#define ADDRECIPEWINDOW_H
#include <string>
#include <vector>

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


private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();


private:
    Ui::addrecipewindow *ui;
};

#endif // ADDRECIPEWINDOW_H
