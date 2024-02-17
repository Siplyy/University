#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QMenu>
#include <QAction>
#include <QInputDialog>

class Widget: public QWidget
{
    Q_OBJECT
public:
    Widget(QWidget *parent = nullptr);
private slots:
    void addBFigure();
    void addCircle();
    void addRectangle();
    void addTriangle();
    void addStar();
};

#endif