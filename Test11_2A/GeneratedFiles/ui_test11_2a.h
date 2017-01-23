/********************************************************************************
** Form generated from reading UI file 'test11_2a.ui'
**
** Created: Thu Aug 18 10:48:00 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST11_2A_H
#define UI_TEST11_2A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDockWidget>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>
#include "Rectangle.h"

QT_BEGIN_NAMESPACE

class Ui_Test11_2AClass
{
public:
    QWidget *centralWidget;
    Rectangle *frame;
    QMenuBar *menuBar;
    QDockWidget *dockWidget;
    QWidget *dockWidgetContents;
    QToolButton *btnRect;
    QToolButton *btnCircle;
    QToolButton *btnTriangle;

    void setupUi(QMainWindow *Test11_2AClass)
    {
        if (Test11_2AClass->objectName().isEmpty())
            Test11_2AClass->setObjectName(QString::fromUtf8("Test11_2AClass"));
        Test11_2AClass->resize(600, 400);
        centralWidget = new QWidget(Test11_2AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new Rectangle(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 290, 61, 51));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Test11_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test11_2AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        Test11_2AClass->setMenuBar(menuBar);
        dockWidget = new QDockWidget(Test11_2AClass);
        dockWidget->setObjectName(QString::fromUtf8("dockWidget"));
        dockWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        dockWidgetContents = new QWidget();
        dockWidgetContents->setObjectName(QString::fromUtf8("dockWidgetContents"));
        btnRect = new QToolButton(dockWidgetContents);
        btnRect->setObjectName(QString::fromUtf8("btnRect"));
        btnRect->setGeometry(QRect(20, 30, 37, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Test11_2A/Resources/rectangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnRect->setIcon(icon);
        btnRect->setIconSize(QSize(36, 36));
        btnRect->setAutoRaise(true);
        btnCircle = new QToolButton(dockWidgetContents);
        btnCircle->setObjectName(QString::fromUtf8("btnCircle"));
        btnCircle->setGeometry(QRect(20, 90, 37, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Test11_2A/Resources/circle.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnCircle->setIcon(icon1);
        btnCircle->setIconSize(QSize(36, 36));
        btnCircle->setAutoRaise(true);
        btnTriangle = new QToolButton(dockWidgetContents);
        btnTriangle->setObjectName(QString::fromUtf8("btnTriangle"));
        btnTriangle->setGeometry(QRect(20, 150, 37, 31));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Test11_2A/Resources/triangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        btnTriangle->setIcon(icon2);
        btnTriangle->setIconSize(QSize(36, 36));
        btnTriangle->setAutoRaise(true);
        dockWidget->setWidget(dockWidgetContents);
        Test11_2AClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), dockWidget);

        retranslateUi(Test11_2AClass);

        QMetaObject::connectSlotsByName(Test11_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test11_2AClass)
    {
        Test11_2AClass->setWindowTitle(QApplication::translate("Test11_2AClass", "Test11_2A", 0, QApplication::UnicodeUTF8));
        dockWidget->setWindowTitle(QApplication::translate("Test11_2AClass", "\345\267\245\345\205\267\346\240\217", 0, QApplication::UnicodeUTF8));
        btnRect->setText(QApplication::translate("Test11_2AClass", "...", 0, QApplication::UnicodeUTF8));
        btnCircle->setText(QApplication::translate("Test11_2AClass", "...", 0, QApplication::UnicodeUTF8));
        btnTriangle->setText(QApplication::translate("Test11_2AClass", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test11_2AClass: public Ui_Test11_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST11_2A_H
