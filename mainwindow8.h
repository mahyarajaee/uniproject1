#ifndef MAINWINDOW8_H
#define MAINWINDOW8_H

#include <QMainWindow>

namespace Ui {
class MainWindow8;
}

class MainWindow8 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow8(QWidget *parent = nullptr);
    ~MainWindow8();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow8 *ui;
};

#endif // MAINWINDOW8_H
