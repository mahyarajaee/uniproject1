#include "mainwindow10.h"
#include "ui_mainwindow10.h"

MainWindow10::MainWindow10(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow10)
{
    ui->setupUi(this);

    ui->lineEdit->setPlaceholderText("enter your message");
}

MainWindow10::~MainWindow10()
{
    delete ui;
}
