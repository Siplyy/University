#ifndef FIGURES_H
#define FIGURES_H

#include <QWidget>
#include <QMouseEvent>

class BulgakovFigure: public QWidget
{
    Q_OBJECT
    int x,y;
    int size;
    int rotationAngle;

protected:
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);

public:
    BulgakovFigure(QWidget *p = 0);

private slots:
    void showContextMenu(const QPoint &pos);
    void rotate();
    void resizeFigure();
};

class circleFigure: public QWidget
{
    Q_OBJECT
    int x,y;
    int size;
    int rotationAngle;


protected:
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);

public:
    circleFigure(QWidget *p = 0);

private slots:
    void showContextMenu(const QPoint &pos);
    void rotate();
    void resizeFigure();
};

class rectangleFigure: public QWidget
{
    Q_OBJECT
    int x,y;
    int size;
    int rotationAngle;

protected:
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);

public:
    rectangleFigure(QWidget *p = 0);

private slots:
            void showContextMenu(const QPoint &pos);
    void rotate();
    void resizeFigure();
};

class triangleFigure: public QWidget
{
    Q_OBJECT
    int x,y;
    int size;
    int rotationAngle;

protected:
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);

public:
    triangleFigure(QWidget *p = 0);

private slots:
            void showContextMenu(const QPoint &pos);
    void rotate();
    void resizeFigure();
};

class starFigure: public QWidget
{
    Q_OBJECT
    int x,y;
    int size;
    int rotationAngle;

protected:
    void paintEvent(QPaintEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseMoveEvent(QMouseEvent *e);

public:
    starFigure(QWidget *p = 0);

private slots:
            void showContextMenu(const QPoint &pos);
    void rotate();
    void resizeFigure();
};
#endif