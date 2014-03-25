#ifndef SPACEGUI_H
#define SPACEGUI_H

#include <QGraphicsItem>
#include "Space.h"

class SpaceGUI : public QGraphicsItem
{
public:
//    explicit SpaceGUI(QObject *parent = 0);
    SpaceGUI();
    SpaceGUI(Space* space);
    ~SpaceGUI();

    QRectF boundingRect() const;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option,
               QWidget *widget);

    void SetCellValue(unsigned short Value, unsigned int Pos);
    unsigned short GetCellValue(unsigned int Pos);

    void ClearCASpace();

    unsigned int GetNumberOfCells();

protected:
    void mousePressEvent(QGraphicsSceneMouseEvent *event);

private:
    unsigned int RectHeight;
    unsigned int RectWidth;
    unsigned int NumberOfColumns;
    unsigned int NumberOfRows;

    unsigned int NumberOfRects ;

    Space* CASpace;

    //std::vector<QGraphicsRectItem*> RectVector;

};

#endif // SPACEGUI_H
