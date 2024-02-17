#include <tab2.h>
#include <mainheader.h>

//QCalendarWidget
myQCalendarWidget::myQCalendarWidget(QWidget * parent) : QCalendarWidget(parent) {
    setMouseTracking(true);
}

void myQCalendarWidget::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QCalendarWidget</b><p>The QCalendarWidget class provides a monthly based calendar widget allowing the user to select a date.<p>");
    QCalendarWidget::mouseMoveEvent(e);
}

//QColumnView
myQColumnView::myQColumnView(QWidget * parent) : QColumnView(parent) {
    setMouseTracking(true);
}

void myQColumnView::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QColumnView</b><p>The QColumnView class provides a model/view implementation of a column view. <p>");
    QColumnView::mouseMoveEvent(e);
}

//QListView
myQListView::myQListView(QWidget * parent) : QListView(parent) {
    setMouseTracking(true);
}

void myQListView::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QListView</b><p>The QListView class provides a list or icon view onto a model. <p>");
    QListView::mouseMoveEvent(e);
}

//QTableView
myQTableView::myQTableView(QWidget * parent) : QTableView(parent) {
    setMouseTracking(true);
}

void myQTableView::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QTableView</b><p>The QTableView class provides a default model/view implementation of a table view.<p>");
    QTableView::mouseMoveEvent(e);
}

//QTreeView
myQTreeView::myQTreeView(QWidget * parent) : QTreeView(parent) {
    setMouseTracking(true);
}

void myQTreeView::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QTreeView</b><p>The QTreeView class provides a default model/view implementation of a tree view.<p>");
    QTreeView::mouseMoveEvent(e);
}

//QUndoView
myQUndoView::myQUndoView(QWidget * parent) : QUndoView(parent) {
    setMouseTracking(true);
}

void myQUndoView::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QUndoView</b><p>The QUndoView class displays the contents of a QUndoStack.<p>");
    QUndoView::mouseMoveEvent(e);
}