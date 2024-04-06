#include "mainwindow3.h"
#include "mainwindow4.h"
#include "ui_mainwindow3.h"
#include "QMessageBox"
#include <QSqlDatabase>
#include "QSqlDriver"
#include "QSqlQuery"
#include "QSqlQueryModel"

 int r;
MainWindow3::MainWindow3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow3)
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
    ui->lineEdit->setPlaceholderText("Enter your email adress");
    ui->lineEdit_2->setPlaceholderText("Enter your password");
    ui->lineEdit_3->setPlaceholderText("Enter capecha");
}

MainWindow3::~MainWindow3()
{
    delete ui;
}

void MainWindow3::on_pushButton_3_clicked()
{

    QSqlQuery q;

QString s1,s2;

s1=ui->lineEdit->text();
s2=ui->lineEdit_2->text();
//q.exec("SELECT Email FROM information WHERE Email==('"+s1+"');");
//q.exec("SELECT password FROM information WHERE password==('"+s2+"');");
//for (int i=0;i<=100 ;i++ ) {
   //if(s1==q.value(i))
       //QMessageBox::warning(this,"هشدار","این ایمیل قبلا ذخیره شده است");
  // else if(s2==q.value(i))
      // QMessageBox::warning(this,"هشدار","این ایمیل قبلا ذخیره شده است");
//}
q.exec("INSERT INTO information(Email,password)VALUES('"+s1+"','"+s2+"');");
}
void MainWindow3::on_pushButton_2_clicked()
{

    r=rand()%10;
    switch(r)
    {
       case 0:
          ui->label_2->setStyleSheet("image: url(:/new/prefix1/download1.jpg);");
        break;
    case 1:
        ui->label_2->setStyleSheet("image: url(:/new/prefix1/download2.jpg);");
     break;
    case 2:
          ui->label_2->setStyleSheet("image: url(:/new/prefix1/download3.jpg);");
     break;
    case 3:
          ui->label_2->setStyleSheet("image: url(:/new/prefix1/download4.jpg);");
     break;
    case 4:
          ui->label_2->setStyleSheet("image: url(:/new/prefix1/im1.jpg);");
     break;
    case 5:
          ui->label_2->setStyleSheet("image: url(:/new/prefix1/im2.jpg);");
     break;
    case 6:
          ui->label_2->setStyleSheet("image: url(:/new/prefix1/im3.jpg);");
     break;
    case 7:
          ui->label_2->setStyleSheet("image: url(:/new/prefix1/im4.jpg);");
     break;
    case 8:
          ui->label_2->setStyleSheet("image: url(:/new/prefix1/im5.jpg);");
     break;
    case 9:
          ui->label_2->setStyleSheet("image: url(:/new/prefix1/im6.jpg);");
     break;

  }

}

void MainWindow3::on_pushButton_clicked()
{
   if(r==0)
   {
       if(ui->lineEdit_3->text()=="captcha246")
          {
           MainWindow4 *w4=new MainWindow4;
           w4->show();
       }
       else

       {
          QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
       }
   }
   if(r==1)
   {
       if(ui->lineEdit_3->text()=="YR890")
          {
           MainWindow4 *w4=new MainWindow4;
           w4->show();
       }
       else

       {
          QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
       }
   }
   if(r==2)
   {
       if(ui->lineEdit_3->text()=="gGphJ")
          {
           MainWindow4 *w4=new MainWindow4;
           w4->show();
       }
       else

       {
          QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
       }
   }
   if(r==3)
   {
       if(ui->lineEdit_3->text()=="smwm")
          {
           MainWindow4 *w4=new MainWindow4;
           w4->show();
       }
       else

       {
          QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
       }
   }
   if(r==4)
   {
       if(ui->lineEdit_3->text()=="O3Cw")
          {
           MainWindow4 *w4=new MainWindow4;
           w4->show();
       }
       else

       {
          QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
       }
   }
   if(r==5)
   {
       if(ui->lineEdit_3->text()=="upord")
          {
           MainWindow4 *w4=new MainWindow4;
           w4->show();
       }
       else

       {
          QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
       }
   }
   if(r==6)
   {
       if(ui->lineEdit_3->text()=="PNRHXR")
          {
           MainWindow4 *w4=new MainWindow4;
           w4->show();
       }
       else

       {
          QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
       }
   }
   if(r==7)
   {
       if(ui->lineEdit_3->text()=="706DE")
          {
           MainWindow4 *w4=new MainWindow4;
           w4->show();
       }
       else

       {
          QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
       }
   }
   if(r==8)
   {
       if(ui->lineEdit_3->text()=="2W4M")
          {
           MainWindow4 *w4=new MainWindow4;
           w4->show();
       }
       else

       {
          QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
       }
   }
   if(r==9)
   {
       if(ui->lineEdit_3->text()=="JyPdf")
          {
           MainWindow4 *w4=new MainWindow4;
           w4->show();
       }
       else

       {
          QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
       }
   }

}






