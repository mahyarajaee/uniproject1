#include "mainwindow9.h"
#include"mainwindow6.h"
#include"mainwindow7.h"
#include"mainwindow8.h"
#include"mainwindow10.h"
#include"QMessageBox"
#include "ui_mainwindow9.h"

MainWindow9::MainWindow9(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow9)
{
    ui->setupUi(this);
}

MainWindow9::~MainWindow9()
{
    delete ui;
}

void MainWindow9::on_pushButton_6_clicked()
{
    ui->pushButton_6->setText("pending!");
    QMessageBox::information(this,"ok","You Are Accepted");
}



void MainWindow9::on_pushButton_7_clicked()
{
    ui->pushButton_7->setText("pending!");
    QMessageBox::information(this,"ok","You Are Accepted");
}


void MainWindow9::on_pushButton_9_clicked()
{
    ui->pushButton_9->setText("pending!");
    QMessageBox::information(this,"ok","You Are Accepted");
}


void MainWindow9::on_pushButton_2_clicked()
{
    MainWindow6 *w6=new MainWindow6;
    w6->show();
    this->close();
}


void MainWindow9::on_pushButton_8_clicked()
{
    MainWindow7 *w7=new MainWindow7;
    w7->show();
    this->close();
}


void MainWindow9::on_pushButton_3_clicked()
{
    MainWindow8 *w8=new MainWindow8;
    w8->show();
    this->close();
}


void MainWindow9::on_pushButton_4_clicked()
{
    MainWindow10 *w10=new MainWindow10;
    w10->show();
    this->close();
}

