#include "mainheader.h"

#include <QTabWidget>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QMouseEvent>
#include <QFileSystemModel>
#include <QTextEdit>

#include <QGraphicsDropShadowEffect>

Widget::Widget()
{
    QHBoxLayout *l = new QHBoxLayout(this);
    QTabWidget * tab = new QTabWidget(this);
    tab -> setMinimumSize(600, 600);
    l -> addWidget(tab);

    //Tab 1
    QWidget *tab1 = new QWidget(tab);
    tab->addTab(tab1, "&Basic Widgets");
    QHBoxLayout * lt1 = new QHBoxLayout(tab1);
    QVBoxLayout * lt2 = new QVBoxLayout();
    QVBoxLayout * lt3 = new QVBoxLayout();
    QVBoxLayout * lt4 = new QVBoxLayout();

    //QComboBox
    myComboBox * combo = new myComboBox(tab1);
    connect(combo, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt2 -> addWidget(combo);
    //QCheckBox
    myCheckBox * check = new myCheckBox(tab1);
    connect(check, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt3 -> addWidget(check);
    //QCommandLinkButton
    myQCommandLinkButton * commandLink = new myQCommandLinkButton(tab1);
    connect(commandLink, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt4 -> addWidget(commandLink);
    //QDateEdit
    myQDateEdit * dateEdit = new myQDateEdit(tab1);
    connect(dateEdit, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt2 -> addWidget(dateEdit);
    //QTimeEdit
    myQDateTimeEdit * dateTimeEdit = new myQDateTimeEdit(tab1);
    connect(dateTimeEdit, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt3 -> addWidget(dateTimeEdit);
    //QDial
    myQDial * qDial = new myQDial(tab1);
    connect(qDial, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt4 -> addWidget(qDial);
    //QDoubleSpinBox
    myQDoubleSpinBox * qDoubleSpinBox = new myQDoubleSpinBox(tab1);
    connect(qDoubleSpinBox, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt2 -> addWidget(qDoubleSpinBox);
    //QFontComboBox
    myQFontComboBox * qFontComboBox = new myQFontComboBox(tab1);
    connect(qFontComboBox, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt4 -> addWidget(qFontComboBox);
    //QLCDNumber
    myQLCDNumber * qLCDNumber = new myQLCDNumber(tab1);
    connect(qLCDNumber, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt2 -> addWidget(qLCDNumber);
    //QLabel
    myQLabel * qLabel = new myQLabel(tab1);
    connect(qLabel, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    qLabel->setText("I'm a QLabel");
    lt3 -> addWidget(qLabel);
    //QLineEdit
    myQLineEdit * qLineEdit = new myQLineEdit(tab1);
    connect(qLineEdit, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt4 -> addWidget(qLineEdit);
    //QProgressBar
    myQProgressBar * qProgressBar = new myQProgressBar(tab1);
    connect(qProgressBar, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt3 -> addWidget(qProgressBar);
    //QPushButton
    myQPushButton * qPushButton = new myQPushButton(tab1);
    connect(qPushButton, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt4 -> addWidget(qPushButton);
    //QRadioButton
    myQRadioButton * qRadioButton = new myQRadioButton(tab1);
    connect(qRadioButton, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt2 -> addWidget(qRadioButton);
    //QScrollBar
    myQScrollBar * qScrollBar = new myQScrollBar(tab1);
    connect(qScrollBar, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt4 -> addWidget(qScrollBar);
    //QSizeGrip
    myQSizeGrip * qSizeGrip = new myQSizeGrip(tab1);
    connect(qSizeGrip, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt2 -> addWidget(qSizeGrip);
    //QSlider
    myQSlider * qSlider = new myQSlider(tab1);
    connect(qSlider, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt3 -> addWidget(qSlider);
    //QSpinBox
    myQSpinBox * qSpinBox = new myQSpinBox(tab1);
    connect(qSpinBox, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt4 -> addWidget(qSpinBox);
    //QTimeEdit
    myQTimeEdit * qTimeEdit = new myQTimeEdit(tab1);
    connect(qTimeEdit, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt4 -> addWidget(qTimeEdit);
    //QToolButton
    myQToolButton * qToolButton = new myQToolButton(tab1);
    connect(qToolButton, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt3 -> addWidget(qToolButton);

    lt1->addLayout(lt2);
    lt1->addLayout(lt3);
    lt1->addLayout(lt4);
    //Tab2
    QWidget *tab2 = new QWidget(tab);
    tab->addTab(tab2, "&Advanced Widgets");
    QHBoxLayout * lt5 = new QHBoxLayout(tab2);
    QVBoxLayout * lt6 = new QVBoxLayout();
    QVBoxLayout * lt7 = new QVBoxLayout();

    QFileSystemModel *model = new QFileSystemModel;
    model->setRootPath(QDir::rootPath());

    //QCalendarWidget
    myQCalendarWidget * qCalendarWidget = new myQCalendarWidget(tab2);
    connect(qCalendarWidget, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt6 -> addWidget(qCalendarWidget);

    //QColumnView
    myQColumnView * qColumnView = new myQColumnView(tab2);
    qColumnView->setModel(model);
    connect(qColumnView, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt7 -> addWidget(qColumnView);

    //QListView
    myQListView * qListView = new myQListView(tab2);
    qListView->setModel(model);
    connect(qListView, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt7 -> addWidget(qListView);

    //QTableView
    myQTableView * qTableView = new myQTableView(tab2);
    qTableView->setModel(model);
    connect(qTableView, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt6 -> addWidget(qTableView);

    //QTreeView
    myQTreeView * qTreeView = new myQTreeView(tab2);
    qTreeView->setModel(model);
    connect(qTreeView, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt7 -> addWidget(qTreeView);

    //QUndoView
    myQUndoView * qUndoView = new myQUndoView(tab2);
    qUndoView->setModel(model);
    connect(qUndoView, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt6 -> addWidget(qUndoView);

    lt5->addLayout(lt6);
    lt5->addLayout(lt7);
    //Tab3
    QWidget *tab3 = new QWidget(tab);
    tab->addTab(tab3, "&Organizer Widgets");
    QHBoxLayout * lt8 = new QHBoxLayout(tab3);
    QVBoxLayout * lt9 = new QVBoxLayout();
    QVBoxLayout * lt10 = new QVBoxLayout();

//    QGroupBox
    myQGroupBox * qGroupBox = new myQGroupBox(tab3);
    connect(qGroupBox, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));

    qGroupBox->setTitle("&Anti-stress buttons");
    QPushButton *p1 = new QPushButton(tr("&Press me"));
    QPushButton *p2 = new QPushButton(tr("&Point at me"));
    QPushButton *p3 = new QPushButton(tr("&Click here"));
    QVBoxLayout *groupLayout = new QVBoxLayout;
    groupLayout->addWidget(p1);
    groupLayout->addWidget(p2);
    groupLayout->addWidget(p3);
    qGroupBox->setLayout(groupLayout);

    lt10 -> addWidget(qGroupBox);
//    QSplitter
    myQSplitter * qSplitter = new myQSplitter(tab3);
    connect(qSplitter, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));

    QListView *listview = new QListView;
    QTreeView *treeview = new QTreeView;
    QTextEdit *textedit = new QTextEdit;
    listview->setModel(model);
    treeview->setModel(model);

    qSplitter->addWidget(listview);
    qSplitter->addWidget(treeview);
    qSplitter->addWidget(textedit);

    lt9 -> addWidget(qSplitter);

//    QSplitterHandle
    myQSplitterHandle *splitterHandleH = new myQSplitterHandle(Qt::Orientation::Horizontal, qSplitter);
    myQSplitterHandle *splitterHandleV = new myQSplitterHandle(Qt::Orientation::Vertical, qSplitter);

    connect(splitterHandleH, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    connect(splitterHandleV, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));

    //QStackedWidget
    myQStackedWidget * qStackedWidget = new myQStackedWidget(tab3);
    connect(qStackedWidget, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));

    QWidget *firstPageWidget = new QWidget;
    QWidget *secondPageWidget = new QWidget;
    QWidget *thirdPageWidget = new QWidget;
    qStackedWidget->addWidget(firstPageWidget);
    qStackedWidget->addWidget(secondPageWidget);
    qStackedWidget->addWidget(thirdPageWidget);
    QComboBox *pageComboBox = new QComboBox;
    QComboBox *stackComboBox = new QComboBox(firstPageWidget);
    QTextEdit *stackTextEdit = new QTextEdit(secondPageWidget);
    QPushButton *stackPushButton = new QPushButton(thirdPageWidget);
    pageComboBox->addItem(tr("Page 1"));
    pageComboBox->addItem(tr("Page 2"));
    pageComboBox->addItem(tr("Page 3"));
    connect(pageComboBox, QOverload<int>::of(&QComboBox::activated),
            qStackedWidget, &QStackedWidget::setCurrentIndex);
    lt9 -> addWidget(pageComboBox);
    lt9 -> addWidget(qStackedWidget);

    //QTabWidget
    myQTabWidget * qTabWidget = new myQTabWidget(tab3);
    QWidget *firstPageWidget1 = new QWidget;
    QWidget *secondPageWidget2 = new QWidget;
    QWidget *thirdPageWidget3 = new QWidget;
    qTabWidget->addTab(firstPageWidget1, "Tab1");
    qTabWidget->addTab(secondPageWidget2, "Tab2");
    qTabWidget->addTab(thirdPageWidget3, "Tab3");
    connect(qTabWidget, SIGNAL(info(QString)), this, SLOT(changeInfo(QString)));
    lt10 -> addWidget(qTabWidget);

    //Ending tab3
    lt8->addLayout(lt9);
    lt8->addLayout(lt10);

    frame = new QFrame(this);
    frame -> setFrameShape(QFrame::Box);
    frame -> setMinimumSize(200, 600);
    l -> addWidget(frame);

    frame_text = new QLabel(frame);
    frame_text->setMinimumSize(200, 600);
    frame_text->setWordWrap(true);
    frame_text->setStyleSheet("background-color:#00008B;");
    frame_text -> setText("<font size=\"20\"><b><center>What are QT widgets?</font></b></center><br/>" "<font size=\"6\"><center>\n"
                          "Briefly about QT widgets for the little ones</center>");


    //Some graphic adds

    QGraphicsDropShadowEffect *shadowEffect = new QGraphicsDropShadowEffect;
    shadowEffect->setBlurRadius(10);
    shadowEffect->setColor(QColor(0, 0, 0, 150));
    shadowEffect->setOffset(5, 5);

    qFontComboBox->setStyleSheet("background-color: #F0F0F0; color: #000000; border: 2px solid #000000;");
    qFontComboBox->setGraphicsEffect(shadowEffect);

    qCalendarWidget->setStyleSheet("background-color: #F0F0F0; color: #000000;");
    qCalendarWidget->setGraphicsEffect(shadowEffect);

    qGroupBox->setStyleSheet("background-color: #F0F0F0; color: #000000;");
    qGroupBox->setGraphicsEffect(shadowEffect);

    qListView->setStyleSheet("background-color: #F0F0F0; color: #000000; border: 2px solid #000000;");
    qListView->setGraphicsEffect(shadowEffect);

    qColumnView->setStyleSheet("background-color: #F0F0F0; color: #000000; border: 2px solid #000000;");
    qColumnView->setGraphicsEffect(shadowEffect);

    qTabWidget->setStyleSheet("background-color: #F0F0F0; color: #000000; border: 2px solid #000000;");
    qTabWidget->setGraphicsEffect(shadowEffect);

    qSplitter->setStyleSheet("background-color: #F0F0F0; color: #000000;");
    qSplitter->setGraphicsEffect(shadowEffect);

    qSizeGrip->setStyleSheet("background-color: #F0F0F0; color: #000000;");
    qSizeGrip->setGraphicsEffect(shadowEffect);
}

void Widget::changeInfo(QString s) {
    frame_text -> setText(s);
}

