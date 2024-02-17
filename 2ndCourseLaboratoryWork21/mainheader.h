#ifndef MAINHEADER_H
#define MAINHEADER_H

#include <QWidget>
#include <QComboBox>
#include <QMouseEvent>
#include <tab1.h>
#include <tab2.h>
#include <tab3.h>

class QFrame;
class QLabel;

class Widget : public QWidget
{
    Q_OBJECT
    QFrame *frame;
    QLabel *frame_text;
public:
    Widget();

public slots:
    void changeInfo(QString s);
};

#endif