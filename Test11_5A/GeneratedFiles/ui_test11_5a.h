/********************************************************************************
** Form generated from reading UI file 'test11_5a.ui'
**
** Created: Sun Aug 21 17:01:12 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST11_5A_H
#define UI_TEST11_5A_H

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

class Ui_Test11_5AClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test11_5AClass)
    {
        if (Test11_5AClass->objectName().isEmpty())
            Test11_5AClass->setObjectName(QString::fromUtf8("Test11_5AClass"));
        Test11_5AClass->resize(600, 400);
        menuBar = new QMenuBar(Test11_5AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Test11_5AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test11_5AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test11_5AClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Test11_5AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Test11_5AClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Test11_5AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test11_5AClass->setStatusBar(statusBar);

        retranslateUi(Test11_5AClass);

        QMetaObject::connectSlotsByName(Test11_5AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test11_5AClass)
    {
        Test11_5AClass->setWindowTitle(QApplication::translate("Test11_5AClass", "Test11_5A", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test11_5AClass: public Ui_Test11_5AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST11_5A_H
