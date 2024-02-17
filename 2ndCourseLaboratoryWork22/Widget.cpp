#include "Widget.h"
#include "figures.h"

#include <QMouseEvent>
#include <QColor>
#include <QPainter>
#include <QAction>
#include <QInputDialog>

Widget::Widget(QWidget *parent)
        : QWidget(parent)
{
    setMinimumSize(800, 600);

    QMenu *contextMenu = new QMenu(this);
    //Bulgakov's Figure
    QAction *addBFigureAction = new QAction("Add Bulgakov's figure", this);
    connect(addBFigureAction, &QAction::triggered, this, &Widget::addBFigure);
    contextMenu->addAction(addBFigureAction);
    //Circle
    QAction *addCircleAction = new QAction("Add Circle", this);
    connect(addCircleAction, &QAction::triggered, this, &Widget::addCircle);
    contextMenu->addAction(addCircleAction);
    //Rectangle
    QAction *addRectangleAction = new QAction("Add Rectangle", this);
    connect(addRectangleAction, &QAction::triggered, this, &Widget::addRectangle);
    contextMenu->addAction(addRectangleAction);
    //Triangle
    QAction *addTriangleAction = new QAction("Add Triangle", this);
    connect(addTriangleAction, &QAction::triggered, this, &Widget::addTriangle);
    contextMenu->addAction(addTriangleAction);
    //Star
    QAction *addStarAction = new QAction("Add Star", this);
    connect(addStarAction, &QAction::triggered, this, &Widget::addStar);
    contextMenu->addAction(addStarAction);

    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &QWidget::customContextMenuRequested, [this, contextMenu](const QPoint &pos) {
        contextMenu->popup(mapToGlobal(pos));
    });
}

void Widget::addBFigure()
{
    BulgakovFigure *figure = new BulgakovFigure(this);
    figure->show();
}

void Widget::addCircle()
{
    circleFigure *figure = new circleFigure(this);
    figure->show();
}

void Widget::addRectangle()
{
    rectangleFigure *figure = new rectangleFigure(this);
    figure->show();
}

void Widget::addTriangle()
{
    triangleFigure *figure = new triangleFigure(this);
    figure->show();
}

void Widget::addStar()
{
    starFigure *figure = new starFigure(this);
    figure->show();
}