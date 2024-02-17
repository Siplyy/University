#ifndef TAB1_H
#define TAB1_H

#include <QFocusFrame>
#include <QDoubleSpinBox>
#include <QDateTimeEdit>
#include <QDateEdit>
#include <QCheckBox>
#include <QComboBox>
#include <QTabWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QMouseEvent>
#include <QCommandLinkButton>
#include <QDial>
#include <QFontComboBox>
#include <QLCDNumber>
#include <QLineEdit>
#include <QMenu>
#include <QProgressBar>
#include <QPushButton>
#include <QRadioButton>
#include <QScrollArea>
#include <QScrollBar>
#include <QSizeGrip>
#include <QSlider>
#include <QSpinBox>
#include <QTabBar>
#include <QTabWidget>
#include <QTimeEdit>
#include <QToolBox>
#include <QToolButton>

class myComboBox : public QComboBox
{
    Q_OBJECT
public:
    myComboBox(QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
    void info(QString);
};

class myCheckBox : public QCheckBox
{
    Q_OBJECT
public:
    myCheckBox(QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
    void info(QString);
};

class myQCommandLinkButton : public QCommandLinkButton
{
    Q_OBJECT
public:
    myQCommandLinkButton(QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
        void info(QString);
};

class myQDateEdit  : public QDateEdit
{
    Q_OBJECT
public:
    myQDateEdit (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQDateTimeEdit  : public QDateTimeEdit
{
    Q_OBJECT
public:
    myQDateTimeEdit (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQDial  : public QDial
{
    Q_OBJECT
public:
    myQDial (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQDoubleSpinBox  : public QDoubleSpinBox
{
    Q_OBJECT
public:
    myQDoubleSpinBox (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQFontComboBox  : public QFontComboBox
{
    Q_OBJECT
public:
    myQFontComboBox (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQLCDNumber  : public QLCDNumber
{
    Q_OBJECT
public:
    myQLCDNumber (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQLabel  : public QLabel
{
    Q_OBJECT
public:
    myQLabel (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQLineEdit  : public QLineEdit
{
    Q_OBJECT
public:
    myQLineEdit (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQProgressBar  : public QProgressBar
{
    Q_OBJECT
public:
    myQProgressBar (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQPushButton  : public QPushButton
{
    Q_OBJECT
public:
    myQPushButton (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQRadioButton  : public QRadioButton
{
    Q_OBJECT
public:
    myQRadioButton (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQScrollBar  : public QScrollBar
{
    Q_OBJECT
public:
    myQScrollBar (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQSizeGrip  : public QSizeGrip
{
    Q_OBJECT
public:
    myQSizeGrip (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQSlider  : public QSlider
{
    Q_OBJECT
public:
    myQSlider (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQSpinBox  : public QSpinBox
{
    Q_OBJECT
public:
    myQSpinBox (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQTimeEdit  : public QTimeEdit
{
    Q_OBJECT
public:
    myQTimeEdit (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};

class myQToolButton  : public QToolButton
{
    Q_OBJECT
public:
    myQToolButton (QWidget *parent = 0);
protected:
    void mouseMoveEvent(QMouseEvent *e);
    signals:
            void info(QString);
};
#endif