#include <tab1.h>
#include <mainheader.h>

//QComboBox
myComboBox::myComboBox(QWidget * parent) : QComboBox(parent) {
    setMouseTracking(true);
}

void myComboBox::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QComboBox</b><p>The QComboBox widget is a combined button and popup list<p>");
    QComboBox::mouseMoveEvent(e);
}

//QCheckBox
myCheckBox::myCheckBox(QWidget * parent) : QCheckBox(parent) {
    setMouseTracking(true);
}

void myCheckBox::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QCheckBox</b><p>The QCheckBox widget provides a checkbox with a text label.<p>");
    QCheckBox::mouseMoveEvent(e);
}

//QCommandLinkButton
myQCommandLinkButton::myQCommandLinkButton(QWidget * parent) : QCommandLinkButton(parent) {
    setMouseTracking(true);
}

void myQCommandLinkButton::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QCommandLinkButton</b><p>The QCommandLinkButton widget provides a Vista style command link button..<p>");
    QCommandLinkButton::mouseMoveEvent(e);
}

//QDateEdit
myQDateEdit::myQDateEdit(QWidget * parent) : QDateEdit(parent) {
    setMouseTracking(true);
}

void myQDateEdit::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QDateEdit</b><p>The QDateEdit class provides a widget for editing dates based on the QDateTimeEdit widget.<p>");
    QDateEdit::mouseMoveEvent(e);
}

//QDateTimeEdit
myQDateTimeEdit::myQDateTimeEdit(QWidget * parent) : QDateTimeEdit(parent) {
    setMouseTracking(true);
}

void myQDateTimeEdit::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QDateTimeEdit</b><p>The QDateTimeEdit class provides a widget for editing dates and times.<p>");
    QDateTimeEdit::mouseMoveEvent(e);
}

//QDial
myQDial::myQDial(QWidget * parent) : QDial(parent) {
    setMouseTracking(true);
}

void myQDial::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QDial</b><p>The QDial class provides a rounded range control (like a speedometer or potentiometer)<p>");
    QDial::mouseMoveEvent(e);
}

//QDoubleSpinBox
myQDoubleSpinBox::myQDoubleSpinBox(QWidget * parent) : QDoubleSpinBox(parent) {
    setMouseTracking(true);
}

void myQDoubleSpinBox::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QDoubleSpinBox</b><p>The QDoubleSpinBox class provides a spin box widget that takes doubles.<p>");
    QDoubleSpinBox::mouseMoveEvent(e);
}

//QFontComboBox
myQFontComboBox::myQFontComboBox(QWidget * parent) : QFontComboBox(parent) {
    setMouseTracking(true);
}

void myQFontComboBox::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QFontComboBox</b><p>The QFontComboBox widget is a combobox that lets the user select a font family.<p>");
    QFontComboBox::mouseMoveEvent(e);
}

//QLCDNumber
myQLCDNumber::myQLCDNumber(QWidget * parent) : QLCDNumber(parent) {
    setMouseTracking(true);
}

void myQLCDNumber::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QLCDNumber</b><p>The QLCDNumber widget displays a number with LCD-like digits.<p>");
    QLCDNumber::mouseMoveEvent(e);
}

//QLabel
myQLabel::myQLabel(QWidget * parent) : QLabel(parent) {
    setMouseTracking(true);
}

void myQLabel::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QLabel</b><p>The QLabel widget provides a text or image display.<p>");
    QLabel::mouseMoveEvent(e);
}

//QLineEdit
myQLineEdit::myQLineEdit(QWidget * parent) : QLineEdit(parent) {
    setMouseTracking(true);
}

void myQLineEdit::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QLineEdit</b><p>The QLineEdit widget is a one-line text editor.<p>");
    QLineEdit::mouseMoveEvent(e);
}

//QProgressBar
myQProgressBar::myQProgressBar(QWidget * parent) : QProgressBar(parent) {
    setMouseTracking(true);
}

void myQProgressBar::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QProgressBar</b><p>The QProgressBar widget provides a horizontal or vertical progress bar.<p>");
    QProgressBar::mouseMoveEvent(e);
}

//QPushButton
myQPushButton::myQPushButton(QWidget * parent) : QPushButton(parent) {
    setMouseTracking(true);
}

void myQPushButton::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QPushButton</b><p>The QPushButton widget provides a command button.<p>");
    QPushButton::mouseMoveEvent(e);
}

//QRadioButton
myQRadioButton::myQRadioButton(QWidget * parent) : QRadioButton(parent) {
    setMouseTracking(true);
}

void myQRadioButton::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QRadioButton</b><p>The QRadioButton widget provides a radio button with a text label.<p>");
    QRadioButton::mouseMoveEvent(e);
}

//QScrollBar
myQScrollBar::myQScrollBar(QWidget * parent) : QScrollBar(parent) {
    setMouseTracking(true);
}

void myQScrollBar::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QScrollBar</b><p>The QScrollBar widget provides a vertical or horizontal scroll bar.<p>");
    QScrollBar::mouseMoveEvent(e);
}

//QSizeGrip
myQSizeGrip::myQSizeGrip(QWidget * parent) : QSizeGrip(parent) {
    setMouseTracking(true);
}

void myQSizeGrip::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QSizeGrip</b><p>The QSizeGrip class provides a resize handle for resizing top-level windows.<p>");
    QSizeGrip::mouseMoveEvent(e);
}

//QSlider
myQSlider::myQSlider(QWidget * parent) : QSlider(parent) {
    setMouseTracking(true);
}

void myQSlider::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QSlider</b><p>The QSlider widget provides a vertical or horizontal slider.<p>");
    QSlider::mouseMoveEvent(e);
}

//QSpinBox
myQSpinBox::myQSpinBox(QWidget * parent) : QSpinBox(parent) {
    setMouseTracking(true);
}

void myQSpinBox::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QSpinBox</b><p>The QSpinBox class provides a spin box widget.<p>");
    QSpinBox::mouseMoveEvent(e);
}

//QTimeEdit
myQTimeEdit::myQTimeEdit(QWidget * parent) : QTimeEdit(parent) {
    setMouseTracking(true);
}

void myQTimeEdit::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QTimeEdit</b><p>The QTimeEdit class provides a widget for editing times based on the QDateTimeEdit widget. <p>");
    QTimeEdit::mouseMoveEvent(e);
}

//QToolButton
myQToolButton::myQToolButton(QWidget * parent) : QToolButton(parent) {
    setMouseTracking(true);
}

void myQToolButton::mouseMoveEvent(QMouseEvent *e) {
    emit info("<b>QToolButton</b><p>The QToolButton class provides a quick-access button to commands or options, usually used inside a QToolBar.<p>");
    QToolButton::mouseMoveEvent(e);
}