#include "mainwindow5.h"
#include "ui_mainwindow5.h"
#include"QComboBox"


MainWindow5::MainWindow5(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow5)
{
    ui->setupUi(this);
    ui->lineEdit->setPlaceholderText("Enter your Job:");
    ui->lineEdit_2->setPlaceholderText("Enter Company name");
   ui->lineEdit_3->setPlaceholderText("school or college or university");

   QStringList days=(QStringList()
                       <<""
                       <<"1"
                       <<"2"
                       <<"3"
                       <<"4"
                       <<"5"
                       <<"6"
                       <<"7"
                       <<"8"
                       <<"9"
                       <<"10"
                       <<"11"
                       <<"12"
                      <<"13"
                      <<"14"
                      <<"15"
                      <<"16"
                      <<"17"
                      <<"18"
                      <<"19"
                      <<"20"
                      <<"21"
                      <<"22"
                      <<"23"
                      <<"24"
                      <<"25"
                      <<"26"
                      <<"27"
                      <<"28"
                      <<"29"
                      <<"30"
                      <<"31");
   ui->comboBox_3->addItems(days);
   QStringList months=(QStringList()
                       <<""
                       <<"january"
                       <<"february"
                       <<"march"
                       <<"april"
                       <<"may"
                       <<"june"
                       <<"july"
                       <<"august"
                       <<"september"
                       <<"october"
                       <<"november"
                       <<"december");
   ui->comboBox_2->addItems(months);

}

MainWindow5::~MainWindow5()
{
    delete ui;
}


