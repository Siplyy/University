#include <QApplication>
#include "Widget.h"

int main(int argc, char **argv){

  QApplication app(argc,argv);

  Widget w;
  w.setMinimumSize(800,600);
  w.show();
  
  return app.exec();
}
