#include "mainwindow6.h"
#include"mainwindow7.h"
#include"mainwindow8.h"
#include"mainwindow10.h"
#include"mainwindow11.h"
#include "ui_mainwindow6.h"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include"QMessageBox"


MainWindow6::MainWindow6(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow6)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("c:\\users\\honey\\documents\\projectuni\\project.db");
    database.open();
    if(database.isOpen())
    {
        QMessageBox::information(this,"Status","database is open");
    }
else{
        QMessageBox::information(this,"Status","database is not open");
    }
}

MainWindow6::~MainWindow6()
{
    delete ui;
}




void MainWindow6::on_pushButton_8_clicked()
{
    MainWindow7 *w7=new MainWindow7;
    w7->show();

}


void MainWindow6::on_pushButton_3_clicked()
{
    MainWindow8 *w8=new MainWindow8;
    w8->show();
   this->close();
}


void MainWindow6::on_pushButton_clicked()
{
    ui->like->setStyleSheet("background-color: rgb(255, 0, 0);");
}


void MainWindow6::on_pushButton_10_clicked()
{
     ui->like2->setStyleSheet("background-color: rgb(255, 0, 0);");
}


void MainWindow6::on_pushButton_19_clicked()
{
    ui->like3->setStyleSheet("background-color: rgb(255, 0, 0);");
}


void MainWindow6::on_pushButton_24_clicked()
{
    ui->like4->setStyleSheet("background-color: rgb(255, 0, 0);");
}


void MainWindow6::on_pushButton_28_clicked()
{
    ui->like5->setStyleSheet("background-color: rgb(255, 0, 0);");
}


void MainWindow6::on_pushButton_37_clicked()
{
    ui->like6->setStyleSheet("background-color: rgb(255, 0, 0);");
}


void MainWindow6::on_pushButton_42_clicked()
{
    ui->like7->setStyleSheet("background-color: rgb(255, 0, 0);");
}


void MainWindow6::on_pushButton_47_clicked()
{
    ui->like7_2->setStyleSheet("background-color: rgb(255, 0, 0);");
}


void MainWindow6::on_pushButton_52_clicked()
{
    ui->like8->setStyleSheet("background-color: rgb(255, 0, 0);");
}


void MainWindow6::on_pushButton_32_clicked()
{
    ui->like9->setStyleSheet("background-color: rgb(255, 0, 0);");
}


void MainWindow6::on_pushButton_4_clicked()
{
    MainWindow10 *w10=new MainWindow10;
    w10->show();
    this->close();
}


void MainWindow6::on_pushButton_5_clicked()
{
    MainWindow11 *w11=new MainWindow11;
    w11->show();
    this->close();
}


void MainWindow6::on_pushButton_6_clicked()
{
    QSqlQuery q;
    QString s1;
    q.exec("INSERT INTO home(follow)VALUES('"+s1+"');");
}


void MainWindow6::on_pushButton_9_clicked()
{
    QSqlQuery q;
    QString s1;
    q.exec("INSERT INTO home(follow)VALUES('"+s1+"');");
}


void MainWindow6::on_pushButton_13_clicked()
{
    QSqlQuery q;
    QString s1;
    q.exec("INSERT INTO home(follow)VALUES('"+s1+"');");
}


void MainWindow6::on_pushButton_14_clicked()
{
    QSqlQuery q;
    QString s1;
    q.exec("INSERT INTO home(follow)VALUES('"+s1+"');");
}


void MainWindow6::on_pushButton_36_clicked()
{
    QSqlQuery q;
    QString s1;
    q.exec("INSERT INTO home(follow)VALUES('"+s1+"');");
}


void MainWindow6::on_pushButton_41_clicked()
{
    QSqlQuery q;
    QString s1;
    q.exec("INSERT INTO home(follow)VALUES('"+s1+"');");
}


void MainWindow6::on_pushButton_46_clicked()
{
    QSqlQuery q;
    QString s1;
    q.exec("INSERT INTO home(follow)VALUES('"+s1+"');");
}


void MainWindow6::on_pushButton_51_clicked()
{
    QSqlQuery q;
    QString s1;
    q.exec("INSERT INTO home(follow)VALUES('"+s1+"');");
}


void MainWindow6::on_pushButton_21_clicked()
{
    QSqlQuery q;
    QString s1;
    q.exec("INSERT INTO home(follow)VALUES('"+s1+"');");
}


void MainWindow6::on_pushButton_34_clicked()
{

}

