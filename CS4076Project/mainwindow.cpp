#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap logopix(":/resources/Images/logo.png");
    int w = ui->label_logo->width();
    int h = ui->label_logo->height();
    ui->label_logo->setPixmap(logopix.scaled(w,h,Qt::KeepAspectRatio));
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
//   QuickAndEasy qae;
//   qae.setModal(true);
//   qae.exec();
    hide();
    qae = new QuickAndEasy(this);
    qae->show();

}

