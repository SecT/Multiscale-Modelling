#include "spacegui.h"
#include <QPainter>
#include <QGraphicsSceneMouseEvent>
#include "Space.h"

#include <QDebug>

SpaceGUI::SpaceGUI()
{
    RectHeight = 20;
    RectWidth = 20;
    NumberOfColumns = 10;
    NumberOfRows = 10;

    NumberOfRects = 100;
}

SpaceGUI::SpaceGUI(Space* space)
{
    RectHeight = 20;
    RectWidth = 20;
    NumberOfColumns = 10;
    NumberOfRows = 10;

    CASpace = space;
    NumberOfRects = space->GetSize();
};

SpaceGUI::~SpaceGUI()
{
    delete CASpace;

}

QRectF SpaceGUI::boundingRect() const
{
    return QRectF(0,0,NumberOfColumns*RectWidth,NumberOfRows*RectHeight);
};

void SpaceGUI::paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
           QWidget *widget)
{
    qDebug()<<"Start painting";

    for(unsigned int i = 0; i < NumberOfRects; i++)
    {

        //choose color for cell
        switch(CASpace->GetValue(i))
        {
        case 0:
            painter->setBrush(Qt::white);
            break;
        case 1:
            painter->setBrush(Qt::red);
            break;
        case 2:
            painter->setBrush(Qt::yellow);
            break;
        case 3:
            painter->setBrush(Qt::blue);
            break;
        default:
            painter->setBrush(Qt::black);
            break;
        }

        painter->drawRect(
                QRectF((i%NumberOfColumns)*RectWidth,i/NumberOfRows*RectHeight,RectWidth,RectHeight));
    }


};

void SpaceGUI::SetCellValue(unsigned short Value, unsigned int Pos)
{
    CASpace->SetValue(Value, Pos);
    update();
};

unsigned short SpaceGUI::GetCellValue(unsigned int Pos)
{
    return CASpace->GetValue(Pos);
};

void SpaceGUI::ClearCASpace()
{
    CASpace->ClearSpace();
    update();
};

unsigned int SpaceGUI::GetNumberOfCells()
{
    return NumberOfRects;
};

void SpaceGUI::mousePressEvent(QGraphicsSceneMouseEvent *event)
{
    qDebug()<<"Click";
    QPointF ClickPos =  event->pos();
    qDebug()<<"Click position. x:"<<ClickPos.x()<<", y:"<<ClickPos.y();

    int xClick = ClickPos.x();
    int yClick = ClickPos.y();

    int CellId = (xClick/RectWidth) + (yClick/RectHeight)*NumberOfColumns;

//    CASpace->SetValue(1,CellId);
    SetCellValue(1,CellId);

    //update();
    QGraphicsItem::mousePressEvent(event);
};
