#ifndef MAINWINDOW7_H
#define MAINWINDOW7_H

#include <QMainWindow>

namespace Ui {
class MainWindow7;
}

class MainWindow7 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow7(QWidget *parent = nullptr);
    ~MainWindow7();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow7 *ui;
};

#endif // MAINWINDOW7_H
