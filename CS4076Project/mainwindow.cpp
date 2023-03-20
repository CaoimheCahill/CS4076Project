#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap logopix("C:/Users/caoim/CS4076Project/CS4076Project/CS4076Project/Images/homeScreen1.png");
    ui->label_logo->setPixmap(logopix);
}

MainWindow::~MainWindow()
{
    delete ui;
}

