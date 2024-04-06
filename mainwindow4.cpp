#include "mainwindow4.h"
#include "mainwindow5.h"
#include "ui_mainwindow4.h"
#include "QMessageBox"
int d;
MainWindow4::MainWindow4(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow4)
{
    ui->setupUi(this);
}

MainWindow4::~MainWindow4()
{
    delete ui;
}





void MainWindow4::on_pushButton_2_clicked()
{

    d=rand()%10;
    switch(d)
    {
       case 0:
          ui->label_2->setText("1234");
        break;
    case 1:
       ui->label_2->setText("1357");
     break;
    case 2:
          ui->label_2->setText("2468");
     break;
    case 3:
         ui->label_2->setText("2024");
     break;
    case 4:
          ui->label_2->setText("2005");
     break;
    case 5:
         ui->label_2->setText("7584");
     break;
    case 6:
         ui->label_2->setText("4536");
     break;
    case 7:
          ui->label_2->setText("5463");
     break;
    case 8:
         ui->label_2->setText("2647");
     break;
    case 9:
         ui->label_2->setText("2505");
     break;


}

}


void MainWindow4::on_pushButton_clicked()
{
    if(d==0)
    {
        if(ui->lineEdit->text()=="1234")
           {
            MainWindow5 *w5=new MainWindow5;
            w5->show();
        }
        else

        {
           QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
        }
    }
    if(d==1)
    {
        if(ui->lineEdit->text()=="1357")
           {
            MainWindow5 *w5=new MainWindow5;
            w5->show();
        }
        else

        {
           QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
        }
    }
    if(d==2)
    {
        if(ui->lineEdit->text()=="2468")
           {
            MainWindow5 *w5=new MainWindow5;
            w5->show();
        }
        else

        {
           QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
        }
    }
    if(d==3)
    {
        if(ui->lineEdit->text()=="2024")
           {
            MainWindow5 *w5=new MainWindow5;
            w5->show();
        }
        else

        {
           QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
        }
    }
    if(d==4)
    {
        if(ui->lineEdit->text()=="2005")
           {
            MainWindow5 *w5=new MainWindow5;
            w5->show();
        }
        else

        {
           QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
        }
    }
    if(d==5)
    {
        if(ui->lineEdit->text()=="7584")
           {
            MainWindow5 *w5=new MainWindow5;
            w5->show();
        }
        else

        {
           QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
        }
    }
    if(d==6)
    {
        if(ui->lineEdit->text()=="4536")
           {
            MainWindow5 *w5=new MainWindow5;
            w5->show();
        }
        else

        {
           QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
        }
    }
    if(d==7)
    {
        if(ui->lineEdit->text()=="5463")
           {
            MainWindow5 *w5=new MainWindow5;
            w5->show();
        }
        else

        {
           QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
        }
    }
    if(d==8)
    {
        if(ui->lineEdit->text()=="2687")
           {
            MainWindow5 *w5=new MainWindow5;
            w5->show();
        }
        else

        {
           QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
        }
    }
    if(d==9)
    {
        if(ui->lineEdit->text()=="2505")
           {
            MainWindow5 *w5=new MainWindow5;
            w5->show();
        }
        else

        {
           QMessageBox::warning(this,"هشدار","کد امنیتی وارد شده صحیح نیست");
        }
    }


 }




