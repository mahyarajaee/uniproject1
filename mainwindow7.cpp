#include "mainwindow7.h"
#include "mainwindow6.h"
#include"mainwindow8.h"
#include"mainwindow10.h"
#include"QMessageBox"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
#include "ui_mainwindow7.h"

MainWindow7::MainWindow7(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow7)
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

MainWindow7::~MainWindow7()
{
    delete ui;
}

void MainWindow7::on_pushButton_2_clicked()
{
    MainWindow6 *w6=new MainWindow6;
    w6->show();
    this->close();
}


void MainWindow7::on_pushButton_3_clicked()
{
    MainWindow8 *w8=new MainWindow8;
    w8->show();
    this->close();
}


void MainWindow7::on_pushButton_4_clicked()
{
    MainWindow10 *w10=new MainWindow10;
    w10->show();
    this->close();
}

