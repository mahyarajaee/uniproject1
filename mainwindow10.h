#ifndef MAINWINDOW10_H
#define MAINWINDOW10_H

#include <QMainWindow>

namespace Ui {
class MainWindow10;
}

class MainWindow10 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow10(QWidget *parent = nullptr);
    ~MainWindow10();

private:
    Ui::MainWindow10 *ui;
};

#endif // MAINWINDOW10_H
