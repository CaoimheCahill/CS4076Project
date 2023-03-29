#include "mainwindow.h"
#include "./ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap logopix(":/resources/Images/logo.png");
    ui->label_logo->setPixmap(logopix);
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
//    QuickAndEasy qae;
//    qae.show();

}

void MainWindow::on_pushButton_2_clicked(){
    hide();
    addrecw = new addrecipewindow(this);
    addrecw->show();
}

