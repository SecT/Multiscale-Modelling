#ifndef MYGRAPHICSVIEW_H
#define MYGRAPHICSVIEW_H

#include <QGraphicsView>

class MyGraphicsView : public QGraphicsView
{
    Q_OBJECT
public:
    explicit MyGraphicsView(QObject *parent = 0);

signals:

public slots:
    void mousePressEvent(QMouseEvent * e);
};

#endif // MYGRAPHICSVIEW_H
