#include "figures.h"

#include <QPainter>
#include <QMenu>
#include <QInputDialog>
#include <QTransform>

BulgakovFigure::BulgakovFigure(QWidget *p) : QWidget(p)
{
    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &QWidget::customContextMenuRequested, this, &BulgakovFigure::showContextMenu);
    size = 100;
    rotationAngle = 0;
}

void BulgakovFigure::paintEvent(QPaintEvent *e)
{
    QTransform transform;
    transform.translate(width() / 2, height() / 2);
    transform.rotate(rotationAngle);
    transform.scale(size / 200.0, size / 150.0);

    setMinimumSize(350,350);
    QPainter p(this);

    p.setPen(QColor(255,0,0));
    p.setTransform(transform);

    p.drawLine(20, 10,190,10); /* o--o */
    p.drawLine(200,20,200,40); /*    | */
    p.drawLine(190,50, 20,50); /* o--o */
    p.drawLine(10, 40, 10,20); /* |    */
    p.drawArc(10,10,20,20,90*16,90*16);
    p.drawArc(10,30,20,20,180*16,90*16);
    p.drawArc(180,30,20,20,270*16,90*16);
    p.drawArc(180,10,20,20,  0*16,90*16);
}

void BulgakovFigure::mousePressEvent(QMouseEvent *e)
{
    x = e->pos().x();
    y = e->pos().y();
}

void BulgakovFigure::mouseMoveEvent(QMouseEvent *e)
{
    int delta_x = e->pos().x() - x;
    int delta_y = e->pos().y() - y;
    move(pos().x()+delta_x, pos().y()+delta_y);
}

void BulgakovFigure::showContextMenu(const QPoint &pos) {
    QMenu contextMenu(this);
    QAction rotateAction("Rotate", this);
    QAction resizeAction("Resize", this);

    connect(&rotateAction, &QAction::triggered, this, &BulgakovFigure::rotate);
    connect(&resizeAction, &QAction::triggered, this, &BulgakovFigure::resizeFigure);

    contextMenu.addAction(&rotateAction);
    contextMenu.addAction(&resizeAction);
    contextMenu.exec(mapToGlobal(pos));
}

void BulgakovFigure::rotate()
{
    bool ok;
    int angle = QInputDialog::getInt(this, "Rotate", "Enter rotation angle (degrees) (from -360 to 360):", 0, -360, 360, 1, &ok);
    if (ok)
    {
        rotationAngle = angle;
        update();
    }
}

void BulgakovFigure::resizeFigure()
{
    bool ok;
    int newSize = QInputDialog::getInt(this, "Resize", "Enter new size (from 10 to 150):", size, 10, 150, 1, &ok);
    if (ok)
    {
        size = newSize;
        update();
    }
}

circleFigure::circleFigure(QWidget *p) : QWidget(p)
{
    size = 100;
    rotationAngle = 0;
    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &QWidget::customContextMenuRequested, this, &circleFigure::showContextMenu);
}

void circleFigure::paintEvent(QPaintEvent *e)
{

    QTransform transform;
    transform.translate(width() / 2, height() / 2);
    transform.rotate(rotationAngle);
    transform.scale(size / 100.0, size / 100.0);

    setMinimumSize(350,350);
    QPainter p(this);

    p.setPen(QColor(255,0,0));
    p.setTransform(transform);

    p.setPen(QColor(255,0,0));
    int circleX = 30;
    int circleY = 30;
    int circleRadius = 25;
    p.drawEllipse(circleX - circleRadius, circleY - circleRadius, 2 * circleRadius, 2 * circleRadius);
}

void circleFigure::mousePressEvent(QMouseEvent *e)
{
    x = e->pos().x();
    y = e->pos().y();
}

void circleFigure::mouseMoveEvent(QMouseEvent *e)
{
    int delta_x = e->pos().x() - x;
    int delta_y = e->pos().y() - y;
    move(pos().x()+delta_x, pos().y()+delta_y);
}

void circleFigure::showContextMenu(const QPoint &pos) {
    QMenu contextMenu(this);
    QAction rotateAction("Rotate", this);
    QAction resizeAction("Resize", this);

    connect(&rotateAction, &QAction::triggered, this, &circleFigure::rotate);
    connect(&resizeAction, &QAction::triggered, this, &circleFigure::resizeFigure);

    contextMenu.addAction(&rotateAction);
    contextMenu.addAction(&resizeAction);
    contextMenu.exec(mapToGlobal(pos));
}

void circleFigure::rotate()
{
    bool ok;
    int angle = QInputDialog::getInt(this, "Rotate", "Enter rotation angle (degrees) (from -360 to 360):", 0, -360, 360, 1, &ok);
    if (ok)
    {
        rotationAngle = angle;
        update();
    }
}

void circleFigure::resizeFigure()
{
    bool ok;
    int newSize = QInputDialog::getInt(this, "Resize", "Enter new size (from 10 to 150):", size, 10, 150, 1, &ok);
    if (ok)
    {
        size = newSize;
        update();
    }
}

rectangleFigure::rectangleFigure(QWidget *p) : QWidget(p)
{
    size = 100;
    rotationAngle = 0;
    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &QWidget::customContextMenuRequested, this, &rectangleFigure::showContextMenu);
}

void rectangleFigure::paintEvent(QPaintEvent *e)
{

    QTransform transform;
    transform.translate(width() / 2, height() / 2);
    transform.rotate(rotationAngle);
    transform.scale(size / 100.0, size / 100.0);

    setMinimumSize(350,350);
    QPainter p(this);

    p.setPen(QColor(255,0,0));
    p.setTransform(transform);

    p.setPen(QColor(255,0,0));
    int rectX = 50;
    int rectY = 50;
    int rectWidth = 40;
    int rectHeight = 30;
    p.drawRect(rectX, rectY, rectWidth, rectHeight);
}

void rectangleFigure::mousePressEvent(QMouseEvent *e)
{
    x = e->pos().x();
    y = e->pos().y();
}

void rectangleFigure::mouseMoveEvent(QMouseEvent *e)
{
    int delta_x = e->pos().x() - x;
    int delta_y = e->pos().y() - y;
    move(pos().x()+delta_x, pos().y()+delta_y);
}

void rectangleFigure::showContextMenu(const QPoint &pos) {
    QMenu contextMenu(this);
    QAction rotateAction("Rotate", this);
    QAction resizeAction("Resize", this);

    connect(&rotateAction, &QAction::triggered, this, &rectangleFigure::rotate);
    connect(&resizeAction, &QAction::triggered, this, &rectangleFigure::resizeFigure);

    contextMenu.addAction(&rotateAction);
    contextMenu.addAction(&resizeAction);
    contextMenu.exec(mapToGlobal(pos));
}

void rectangleFigure::rotate()
{
    bool ok;
    int angle = QInputDialog::getInt(this, "Rotate", "Enter rotation angle (degrees) (from -360 to 360):", 0, -360, 360, 1, &ok);
    if (ok)
    {
        rotationAngle = angle;
        update();
    }
}

void rectangleFigure::resizeFigure()
{
    bool ok;
    int newSize = QInputDialog::getInt(this, "Resize", "Enter new size (from 10 to 150):", size, 10, 150, 1, &ok);
    if (ok)
    {
        size = newSize;
        update();
    }
}


triangleFigure::triangleFigure(QWidget *p) : QWidget(p)
{
    size = 100;
    rotationAngle = 0;
    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &QWidget::customContextMenuRequested, this, &triangleFigure::showContextMenu);
}

void triangleFigure::paintEvent(QPaintEvent *e)
{
    QTransform transform;
    transform.translate(width() / 2, height() / 2);
    transform.rotate(rotationAngle);
    transform.scale(size / 100.0, size / 100.0);

    setMinimumSize(350,350);
    QPainter p(this);

    p.setPen(QColor(255,0,0));
    p.setTransform(transform);

    p.setPen(QColor(255,0,0));
    int x = 10;
    int y = 10;
    int se = 50;
    QPolygon triangle;
    triangle << QPoint(x, y) << QPoint(x + se, y) << QPoint(x + se / 2, y + se);
    p.drawPolygon(triangle);
}

void triangleFigure::mousePressEvent(QMouseEvent *e)
{
    x = e->pos().x();
    y = e->pos().y();
}

void triangleFigure::mouseMoveEvent(QMouseEvent *e)
{
    int delta_x = e->pos().x() - x;
    int delta_y = e->pos().y() - y;
    move(pos().x()+delta_x, pos().y()+delta_y);
}

void triangleFigure::showContextMenu(const QPoint &pos) {
    QMenu contextMenu(this);
    QAction rotateAction("Rotate", this);
    QAction resizeAction("Resize", this);

    connect(&rotateAction, &QAction::triggered, this, &triangleFigure::rotate);
    connect(&resizeAction, &QAction::triggered, this, &triangleFigure::resizeFigure);

    contextMenu.addAction(&rotateAction);
    contextMenu.addAction(&resizeAction);
    contextMenu.exec(mapToGlobal(pos));
}

void triangleFigure::rotate()
{
    bool ok;
    int angle = QInputDialog::getInt(this, "Rotate", "Enter rotation angle (degrees) (from -360 to 360):", 0, -360, 360, 1, &ok);
    if (ok)
    {
        rotationAngle = angle;
        update();
    }
}

void triangleFigure::resizeFigure()
{
    bool ok;
    int newSize = QInputDialog::getInt(this, "Resize", "Enter new size (from 10 to 150):", size, 10, 150, 1, &ok);
    if (ok)
    {
        size = newSize;
        update();
    }
}

starFigure::starFigure(QWidget *p) : QWidget(p)
{
    size = 100;
    rotationAngle = 0;
    setContextMenuPolicy(Qt::CustomContextMenu);
    connect(this, &QWidget::customContextMenuRequested, this, &starFigure::showContextMenu);
}

void starFigure::paintEvent(QPaintEvent *e)
{

    QTransform transform;
    transform.translate(width() / 2, height() / 2);
    transform.rotate(rotationAngle);
    transform.scale(size / 100.0, size / 100.0);

    setMinimumSize(350,350);
    QPainter p(this);

    p.setPen(QColor(255,0,0));
    p.setTransform(transform);

    p.setPen(QColor(255,0,0));

    int x = 10;
    int y = 10;

    QPolygon star;
    star << QPoint(x + 50, y) << QPoint(x + 60, y + 15) << QPoint(x + 80, y + 18) << QPoint(x + 65, y + 30)
         << QPoint(x + 75, y + 50) << QPoint(x + 50, y + 40) << QPoint(x + 25, y + 50) << QPoint(x + 35, y + 30)
         << QPoint(x + 20, y + 18) << QPoint(x + 40, y + 15);
    p.drawPolygon(star);
}

void starFigure::mousePressEvent(QMouseEvent *e)
{
    x = e->pos().x();
    y = e->pos().y();
}

void starFigure::mouseMoveEvent(QMouseEvent *e)
{
    int delta_x = e->pos().x() - x;
    int delta_y = e->pos().y() - y;
    move(pos().x()+delta_x, pos().y()+delta_y);
}

void starFigure::showContextMenu(const QPoint &pos) {
    QMenu contextMenu(this);
    QAction rotateAction("Rotate", this);
    QAction resizeAction("Resize", this);

    connect(&rotateAction, &QAction::triggered, this, &starFigure::rotate);
    connect(&resizeAction, &QAction::triggered, this, &starFigure::resizeFigure);

    contextMenu.addAction(&rotateAction);
    contextMenu.addAction(&resizeAction);
    contextMenu.exec(mapToGlobal(pos));
}

void starFigure::rotate()
{
    bool ok;
    int angle = QInputDialog::getInt(this, "Rotate", "Enter rotation angle (degrees) (from -360 to 360):", 0, -360, 360, 1, &ok);
    if (ok)
    {
        rotationAngle = angle;
        update();
    }
}

void starFigure::resizeFigure()
{
    bool ok;
    int newSize = QInputDialog::getInt(this, "Resize", "Enter new size (from 10 to 150):", size, 10, 150, 1, &ok);
    if (ok)
    {
        size = newSize;
        update();
    }
}