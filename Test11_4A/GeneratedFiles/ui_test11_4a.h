/********************************************************************************
** Form generated from reading UI file 'test11_4a.ui'
**
** Created: Sat Aug 20 10:34:45 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST11_4A_H
#define UI_TEST11_4A_H

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

class Ui_Test11_4AClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test11_4AClass)
    {
        if (Test11_4AClass->objectName().isEmpty())
            Test11_4AClass->setObjectName(QString::fromUtf8("Test11_4AClass"));
        Test11_4AClass->resize(600, 400);
        menuBar = new QMenuBar(Test11_4AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        Test11_4AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test11_4AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test11_4AClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(Test11_4AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Test11_4AClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(Test11_4AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test11_4AClass->setStatusBar(statusBar);

        retranslateUi(Test11_4AClass);

        QMetaObject::connectSlotsByName(Test11_4AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test11_4AClass)
    {
        Test11_4AClass->setWindowTitle(QApplication::translate("Test11_4AClass", "Test11_4A", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test11_4AClass: public Ui_Test11_4AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST11_4A_H
