#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "spacegui.h"
#include "cellularautomaton.h"
#include "rule.h"


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
    CellularAutomaton* CAutomaton;
    Rule* myRule;


private:
    Ui::MainWindow *ui;

private slots:
    //void on_randomizeButton_clicked();
   // void on_drawButton_clicked();
    void on_randomizeButton_clicked();
    void on_pushButton_clicked();
    void on_RunButton_clicked();
};

#endif // MAINWINDOW_H
