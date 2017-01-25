/********************************************************************************
** Form generated from reading UI file 'test11_3b.ui'
**
** Created: Fri Aug 19 11:21:35 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST11_3B_H
#define UI_TEST11_3B_H

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

class Ui_Test11_3BClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test11_3BClass)
    {
        if (Test11_3BClass->objectName().isEmpty())
            Test11_3BClass->setObjectName(QString::fromUtf8("Test11_3BClass"));
        Test11_3BClass->resize(600, 400);
        centralWidget = new QWidget(Test11_3BClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Test11_3BClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test11_3BClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        Test11_3BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test11_3BClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test11_3BClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test11_3BClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test11_3BClass->setStatusBar(statusBar);

        retranslateUi(Test11_3BClass);

        QMetaObject::connectSlotsByName(Test11_3BClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test11_3BClass)
    {
        Test11_3BClass->setWindowTitle(QApplication::translate("Test11_3BClass", "Test11_3B", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test11_3BClass: public Ui_Test11_3BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST11_3B_H
