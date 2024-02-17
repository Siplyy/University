#include "widget.h"

#include <QAction>
#include <QInputDialog>
#include <QMenu>

#include "figure.h"

Widget::Widget(QWidget *parent) : QWidget(parent) {
  setMinimumSize(1200, 800);

  QMenu *contextMenu = new QMenu(this);
  QAction *addTriangleAction = new QAction("Add triangle", this);
  connect(addTriangleAction, &QAction::triggered, this, &Widget::addTriangle);
  contextMenu->addAction(addTriangleAction);

  setContextMenuPolicy(Qt::CustomContextMenu);
  connect(this, &QWidget::customContextMenuRequested,
          [this, contextMenu](const QPoint &pos) {
            contextMenu->popup(mapToGlobal(pos));
          });
}

void Widget::addTriangle() {
  Triangle *shape = new Triangle(this);
  shape->show();
}
