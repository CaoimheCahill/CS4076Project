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

};

#endif // QUICKANDEASY_H
