/********************************************************************************
** Form generated from reading UI file 'test11_7a.ui'
**
** Created: Tue Aug 23 21:49:22 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST11_7A_H
#define UI_TEST11_7A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include "CutPixmap.h"

QT_BEGIN_NAMESPACE

class Ui_Test11_7AClass
{
public:
    QWidget *centralWidget;
    CutPixmap *frame;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test11_7AClass)
    {
        if (Test11_7AClass->objectName().isEmpty())
            Test11_7AClass->setObjectName(QString::fromUtf8("Test11_7AClass"));
        Test11_7AClass->resize(657, 478);
        centralWidget = new QWidget(Test11_7AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        frame = new CutPixmap(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(50, 10, 271, 361));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        Test11_7AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test11_7AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 657, 21));
        Test11_7AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test11_7AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test11_7AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test11_7AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test11_7AClass->setStatusBar(statusBar);

        retranslateUi(Test11_7AClass);

        QMetaObject::connectSlotsByName(Test11_7AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test11_7AClass)
    {
        Test11_7AClass->setWindowTitle(QApplication::translate("Test11_7AClass", "Test11_7A", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test11_7AClass: public Ui_Test11_7AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST11_7A_H
