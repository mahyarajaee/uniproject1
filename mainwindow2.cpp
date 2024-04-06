#include "mainwindow2.h"
#include "mainwindow3.h"
#include "ui_mainwindow2.h"
#include "QMessageBox"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"
MainWindow2::MainWindow2(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow2)
{
    ui->setupUi(this);
    QSqlDatabase database;
    database=QSqlDatabase::addDatabase("QSQLITE");
    database.setDatabaseName("d\\project.db");
    database.open();

}

MainWindow2::~MainWindow2()
{
    delete ui;
}


void MainWindow2::on_pushButton_clicked()
{
    if(ui->lineEdit->text()==""||ui->lineEdit_2->text()=="")
    {
        QMessageBox::warning(this,"هشدار","ایمیل یا پسوورد خود را وارد کنید","باشه");
    }

}


void MainWindow2::on_pushButton_2_clicked()
{
MainWindow3 *w3=new MainWindow3;
w3->setWindowTitle("ثبت نام");
w3->show();
}

