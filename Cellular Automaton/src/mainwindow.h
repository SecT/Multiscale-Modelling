#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "spacegui.h"

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    SpaceGUI* spaceGUI;

private:
    Ui::MainWindow *ui;

private slots:
    //void on_randomizeButton_clicked();
   // void on_drawButton_clicked();
    void on_randomizeButton_clicked();
    void on_pushButton_clicked();
};

#endif // MAINWINDOW_H
