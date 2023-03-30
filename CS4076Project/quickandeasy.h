#ifndef QUICKANDEASY_H
#define QUICKANDEASY_H

#include <QDialog>
#include <QFile>
#include <QScrollArea>
#include <QPushButton>
#include <QWidget>
#include <QVBoxLayout>

namespace Ui {
class QuickAndEasy;
}

class QuickAndEasy : public QDialog
{
    Q_OBJECT

public:
    explicit QuickAndEasy(QWidget *parent = nullptr);
    ~QuickAndEasy();

private:
    Ui::QuickAndEasy *ui;
    QScrollArea* scrollArea;
    QWidget* container;
    QVBoxLayout* lay;

private slots:
    void showRecipeDetails();

    void on_pushButton_clicked();
};

#endif // QUICKANDEASY_H
