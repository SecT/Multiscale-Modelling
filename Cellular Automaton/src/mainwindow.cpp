#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QGraphicsRectItem>

#include <QtGlobal>
#include <QTime>
#include <QDebug>

#include "spacegui.h"
#include "Space.h"

#include "rulemoore.h"

MainWindow::MainWindow(QWidget *parent) :
        QMainWindow(parent),
        ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    Space* mySpace = new Space(100);
//    SpaceGUI* spaceGUI = new SpaceGUI(mySpace);
    spaceGUI = new SpaceGUI(mySpace);

    //TODO: only for test
    mySpace->SetValue(1, 25);

    CAutomaton = new CellularAutomaton(mySpace);

    myRule = new RuleMoore();

    CAutomaton->SetRule(myRule);

    ui->graphicsView->setAlignment(Qt::AlignLeft | Qt::AlignTop);

    QGraphicsScene* scene = new QGraphicsScene(ui->graphicsView);
    scene->setBackgroundBrush(Qt::green);
    ui->graphicsView->setScene(scene);

    scene->addItem(spaceGUI);



}

MainWindow::~MainWindow()
{
    delete ui;

    delete CAutomaton;
    delete spaceGUI;
}

void MainWindow::on_pushButton_clicked()
{
    spaceGUI->ClearCASpace();
}


void MainWindow::on_randomizeButton_clicked()
{
    int NumberOfRandomGrains = 3;

    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());

    //TODO: what if a cell that already contains a grain is selected? Modify
    for(int i = 1; i<= NumberOfRandomGrains; i++)
    {
        int CellId = 0;
        CellId = qrand() % spaceGUI->GetNumberOfCells();

        spaceGUI->SetCellValue(i, CellId);
    }

    //spaceGUI->update();
}



void MainWindow::on_RunButton_clicked()
{
    qDebug()<<"RunButton clicked";
    CAutomaton->Step();
    spaceGUI->update();
}
