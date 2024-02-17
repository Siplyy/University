#include "figure.h"

#include <QDebug>
#include <QInputDialog>
#include <QMenu>
#include <QPainter>
#include <QPainterPath>

Triangle::Triangle(QWidget *parent) : QWidget(parent) {
  setFixedSize(areaWidth, areaHeight);

  QPainterPath triangle;
  triangle.moveTo(-45, 30);
  triangle.lineTo(0, -30);
  triangle.lineTo(45, 30);
  triangle.closeSubpath();

  myPath.addPath(triangle);

  setMouseTracking(true);
  setContextMenuPolicy(Qt::CustomContextMenu);
  connect(this, &QWidget::customContextMenuRequested, this,
          &Triangle::showContextMenu);
  angle = 0;
  scaleFactor = 1.0;
}

void Triangle::paintEvent(QPaintEvent *event) {
  QPainter painter(this);
  QTransform originalTransform = painter.transform();
  painter.setRenderHint(QPainter::Antialiasing, true);
  painter.translate(areaWidth / 2, areaHeight / 2);
  painter.rotate(angle);
  painter.scale(scaleFactor, scaleFactor);
  painter.setPen(Qt::black);

  if (isHovered) {
    painter.setBrush(Qt::NoBrush);
    painter.setPen(QPen(QColor(165, 165, 0), 1));
  } else {
    painter.setBrush(QBrush(fillColor));
  }

  myPath = originalTransform.map(myPath);
  painter.drawPath(myPath);
}

void Triangle::mousePressEvent(QMouseEvent *event) {
  x = event->pos().x();
  y = event->pos().y();
  isPressed = true;
}

void Triangle::mouseMoveEvent(QMouseEvent *event) {
  if (isPressed) {
    int deltaX = event->pos().x() - x;
    int deltaY = event->pos().y() - y;
    move(pos().x() + deltaX, pos().y() + deltaY);
  }
  event->ignore();
}

void Triangle::mouseReleaseEvent(QMouseEvent *event) { isPressed = false; }

void Triangle::showContextMenu(const QPoint &pos) {
  QMenu contextMenu(this);
  QAction rotateAction("Rotate", this);
  connect(&rotateAction, &QAction::triggered, this, &Triangle::rotate);
  contextMenu.addAction(&rotateAction);

  QAction resizeAction("Resize", this);
  connect(&resizeAction, &QAction::triggered, this, &Triangle::resize);
  contextMenu.addAction(&resizeAction);

  contextMenu.exec(mapToGlobal(pos));
  isPressed = false;
}

void Triangle::rotate() {
  bool flag;
  int newAngle = QInputDialog::getInt(
      this, "Rotate",
      "Enter the angle of rotation of the Triangle in degrees:", 0, -360, 360,
      1, &flag);
  if (flag) {
    angle = newAngle;
    update();
  }
}

void Triangle::resize() {
  bool flag;
  int newSize = QInputDialog::getInt(
      this, "Resize", "Enter a new Triangle size:", 100, 10, 150, 1, &flag);
  if (flag) {
    scaleFactor = static_cast<double>(newSize) / 100.0;
    update();
  }
}

void Triangle::enterEvent(QEvent *event) {
  isHovered = true;
  update();
}

void Triangle::leaveEvent(QEvent *event) {
  isHovered = false;
  update();
}
