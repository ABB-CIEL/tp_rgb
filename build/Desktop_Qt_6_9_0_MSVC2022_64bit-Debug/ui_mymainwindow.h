/********************************************************************************
** Form generated from reading UI file 'mymainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYMAINWINDOW_H
#define UI_MYMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MyMainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSpinBox *spinBox_B;
    QSpinBox *spinBox_R;
    QSpinBox *spinBox_G;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QSlider *verticalSlider_2;
    QSlider *verticalSlider_3;
    QSlider *verticalSlider;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MyMainWindow)
    {
        if (MyMainWindow->objectName().isEmpty())
            MyMainWindow->setObjectName("MyMainWindow");
        MyMainWindow->resize(800, 600);
        centralwidget = new QWidget(MyMainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(290, 70, 191, 351));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayoutWidget_2 = new QWidget(frame);
        horizontalLayoutWidget_2->setObjectName("horizontalLayoutWidget_2");
        horizontalLayoutWidget_2->setGeometry(QRect(0, 250, 191, 61));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        spinBox_B = new QSpinBox(horizontalLayoutWidget_2);
        spinBox_B->setObjectName("spinBox_B");
        spinBox_B->setMaximum(255);

        horizontalLayout_2->addWidget(spinBox_B);

        spinBox_R = new QSpinBox(horizontalLayoutWidget_2);
        spinBox_R->setObjectName("spinBox_R");
        spinBox_R->setMaximum(255);

        horizontalLayout_2->addWidget(spinBox_R);

        spinBox_G = new QSpinBox(horizontalLayoutWidget_2);
        spinBox_G->setObjectName("spinBox_G");
        spinBox_G->setMaximum(255);

        horizontalLayout_2->addWidget(spinBox_G);

        horizontalLayoutWidget_3 = new QWidget(frame);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(0, 0, 191, 251));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalSlider_2 = new QSlider(horizontalLayoutWidget_3);
        verticalSlider_2->setObjectName("verticalSlider_2");
        verticalSlider_2->setStyleSheet(QString::fromUtf8("Qslider::handle:vertical {\n"
"background:  qlineargradient(x1:0,  y1:0,  x2:1,  y2:1,  stop:0 white, stop:1 red);\n"
"border:   1px solid  #777  solid;\n"
"width: 18px;\n"
"margin:  -4px 0;\n"
"border-radius:  9px;\n"
"}\n"
"\n"
"Qslider::groove: vertical {\n"
"background:  #a00;\n"
"width: \n"
"border-radius:  9px;\n"
"}"));
        verticalSlider_2->setOrientation(Qt::Orientation::Vertical);

        horizontalLayout_3->addWidget(verticalSlider_2);

        verticalSlider_3 = new QSlider(horizontalLayoutWidget_3);
        verticalSlider_3->setObjectName("verticalSlider_3");
        verticalSlider_3->setOrientation(Qt::Orientation::Vertical);

        horizontalLayout_3->addWidget(verticalSlider_3);

        verticalSlider = new QSlider(horizontalLayoutWidget_3);
        verticalSlider->setObjectName("verticalSlider");
        verticalSlider->setOrientation(Qt::Orientation::Vertical);

        horizontalLayout_3->addWidget(verticalSlider);

        verticalLayoutWidget = new QWidget(frame);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(0, 310, 191, 41));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8("Background: white;\n"
"border:   2px  suken gray"));

        verticalLayout->addWidget(label, 0, Qt::AlignmentFlag::AlignHCenter);

        MyMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MyMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MyMainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MyMainWindow);
        statusbar->setObjectName("statusbar");
        MyMainWindow->setStatusBar(statusbar);

        retranslateUi(MyMainWindow);

        QMetaObject::connectSlotsByName(MyMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MyMainWindow)
    {
        MyMainWindow->setWindowTitle(QCoreApplication::translate("MyMainWindow", "MyMainWindow", nullptr));
        label->setText(QCoreApplication::translate("MyMainWindow", "<html><head/><body><p><span style=\" font-size:18pt; font-weight:700;\">#FFFFFF</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MyMainWindow: public Ui_MyMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYMAINWINDOW_H
