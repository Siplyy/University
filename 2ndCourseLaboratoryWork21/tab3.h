#ifndef TAB3_H
#define TAB3_H

#include <QButtonGroup>
#include <QTabWidget>
#include <QStackedWidget>
#include <QSplitterHandle>
#include <QSplitter>
#include <QGroupBox>


class myQGroupBox  : public QGroupBox
{
    Q_OBJECT
public:
    myQGroupBox (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQSplitter  : public QSplitter
{
    Q_OBJECT
public:
    myQSplitter (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQSplitterHandle  : public QSplitterHandle
{
    Q_OBJECT
public:
    myQSplitterHandle (Qt::Orientation, myQSplitter *);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQStackedWidget  : public QStackedWidget
{
    Q_OBJECT
public:
    myQStackedWidget (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQTabWidget  : public QTabWidget
{
    Q_OBJECT
public:
    myQTabWidget (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

//organizer widget Mtabwidget
#endif