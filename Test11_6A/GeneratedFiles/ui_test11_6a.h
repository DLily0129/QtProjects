/********************************************************************************
** Form generated from reading UI file 'test11_6a.ui'
**
** Created: Mon Aug 22 11:10:08 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST11_6A_H
#define UI_TEST11_6A_H

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

QT_BEGIN_NAMESPACE

class Ui_Test11_6AClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test11_6AClass)
    {
        if (Test11_6AClass->objectName().isEmpty())
            Test11_6AClass->setObjectName(QString::fromUtf8("Test11_6AClass"));
        Test11_6AClass->resize(600, 400);
        menuBar = new QMenuBar(Test11_6AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Test11_6AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test11_6AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test11_6AClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Test11_6AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Test11_6AClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Test11_6AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test11_6AClass->setStatusBar(statusBar);

        retranslateUi(Test11_6AClass);

        QMetaObject::connectSlotsByName(Test11_6AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test11_6AClass)
    {
        Test11_6AClass->setWindowTitle(QApplication::translate("Test11_6AClass", "Test11_6A", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test11_6AClass: public Ui_Test11_6AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST11_6A_H
