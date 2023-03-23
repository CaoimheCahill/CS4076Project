#ifndef QUICKANDEASY_H
#define QUICKANDEASY_H

#include <QDialog>

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
};

#endif // QUICKANDEASY_H
