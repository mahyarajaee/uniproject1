#include "mainwindow11.h"
#include "ui_mainwindow11.h"

MainWindow11::MainWindow11(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow11)
{
    ui->setupUi(this);
}

MainWindow11::~MainWindow11()
{
    delete ui;
}
