#ifndef MAINWINDOW11_H
#define MAINWINDOW11_H

#include <QMainWindow>

namespace Ui {
class MainWindow11;
}

class MainWindow11 : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow11(QWidget *parent = nullptr);
    ~MainWindow11();

private:
    Ui::MainWindow11 *ui;
};

#endif // MAINWINDOW11_H
