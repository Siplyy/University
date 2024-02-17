#ifndef FIGURE_H
#define FIGURE_H

#include <QMouseEvent>
#include <QPainterPath>
#include <QWidget>

class Triangle : public QWidget {
  Q_OBJECT

  int x, y;
  int areaWidth = 180;
  int areaHeight = 180;
  int angle;
  double scaleFactor;
  bool isHovered = false;
  QPainterPath myPath;
  bool isPressed = false;
  QColor fillColor = QColor(0, 0, 0, 0);

 public:
  Triangle(QWidget *parent = nullptr);

 protected:
  void paintEvent(QPaintEvent *event);
  void mousePressEvent(QMouseEvent *event);
  void mouseMoveEvent(QMouseEvent *event);
  void mouseReleaseEvent(QMouseEvent *event);
  void enterEvent(QEvent *event);
  void leaveEvent(QEvent *event);

 private slots:
  void showContextMenu(const QPoint &pos);
  void rotate();
  void resize();
};

#endif
