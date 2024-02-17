#include <tab3.h>
#include <mainheader.h>

//QGroupBox
myQGroupBox::myQGroupBox(QWidget * parent) : QGroupBox(parent) {
    setMouseTracking(true);
}

void myQGroupBox::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QGroupBox</b><p>The QGroupBox widget provides a group box frame with a title. <p>");
    QGroupBox::mouseMoveEvent(e);
}

//QSplitter
myQSplitter::myQSplitter(QWidget * parent) : QSplitter(parent) {
    setMouseTracking(true);
}

void myQSplitter::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QSplitter</b><p>The QSplitter class implements a splitter widget.<p>");
    QSplitter::mouseMoveEvent(e);
}

//QSplitterHandle
myQSplitterHandle::myQSplitterHandle (Qt::Orientation o, myQSplitter * s) : QSplitterHandle(o, s) {
    setMouseTracking(true);
}

void myQSplitterHandle::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QSplitterHandle</b><p>The QSplitterHandle class provides handle functionality for the splitter. <p>");
    QSplitterHandle::mouseMoveEvent(e);
}

//QStackedWidget
myQStackedWidget::myQStackedWidget(QWidget * parent) : QStackedWidget(parent) {
    setMouseTracking(true);
}

void myQStackedWidget::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QStackedWidget</b><p>The QStackedWidget class provides a stack of widgets where only one widget is visible at a time. <p>");
    QStackedWidget::mouseMoveEvent(e);
}

//QTabWidget
myQTabWidget::myQTabWidget(QWidget * parent) : QTabWidget(parent) {
    setMouseTracking(true);
}

void myQTabWidget::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QTabWidget</b><p>The QTabWidget class provides a stack of tabbed widgets.<p>");
    QTabWidget::mouseMoveEvent(e);
}
