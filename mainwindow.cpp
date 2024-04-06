#include "mainwindow.h"
#include "mainwindow2.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
  MainWindow2 *w2= new MainWindow2;
  w2->setWindowTitle("شروع");
   w2->show();
}

