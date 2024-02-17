#ifndef TAB2_H
#define TAB2_H

#include <QCalendarWidget>
#include <QColumnView>
#include <QDataWidgetMapper>
#include <QListView>
#include <QTableView>
#include <QTreeView>
#include <QUndoView>

class myQCalendarWidget  : public QCalendarWidget
{
    Q_OBJECT
public:
    myQCalendarWidget (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQColumnView  : public QColumnView
{
    Q_OBJECT
public:
    myQColumnView (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQListView  : public QListView
{
    Q_OBJECT
public:
    myQListView (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQTableView  : public QTableView
{
    Q_OBJECT
public:
    myQTableView (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQTreeView  : public QTreeView
{
    Q_OBJECT
public:
    myQTreeView (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQUndoView  : public QUndoView
{
    Q_OBJECT
public:
    myQUndoView (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};
#endif