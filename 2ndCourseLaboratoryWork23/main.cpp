#include <QApplication>

#include "widget.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  Widget Widget;
  Widget.show();
  return app.exec();
}