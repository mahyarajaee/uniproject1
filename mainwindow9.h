#ifndef MAINWINDOW9_H
#define MAINWINDOW9_H

#include <QMainWindow>

namespace Ui {
class MainWindow9;
}

class MainWindow9 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow9(QWidget *parent = nullptr);
    ~MainWindow9();

private slots:
    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow9 *ui;
};

#endif // MAINWINDOW9_H
