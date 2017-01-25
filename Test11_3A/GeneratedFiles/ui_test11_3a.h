/********************************************************************************
** Form generated from reading UI file 'test11_3a.ui'
**
** Created: Thu Aug 18 20:41:39 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST11_3A_H
#define UI_TEST11_3A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test11_3AClass
{
public:
    QWidget *centralWidget;
    QPushButton *btnRelease;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test11_3AClass)
    {
        if (Test11_3AClass->objectName().isEmpty())
            Test11_3AClass->setObjectName(QString::fromUtf8("Test11_3AClass"));
        Test11_3AClass->resize(192, 586);
        centralWidget = new QWidget(Test11_3AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btnRelease = new QPushButton(centralWidget);
        btnRelease->setObjectName(QString::fromUtf8("btnRelease"));
        btnRelease->setGeometry(QRect(110, 500, 75, 23));
        Test11_3AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test11_3AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 192, 21));
        Test11_3AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test11_3AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test11_3AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test11_3AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test11_3AClass->setStatusBar(statusBar);

        retranslateUi(Test11_3AClass);

        QMetaObject::connectSlotsByName(Test11_3AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test11_3AClass)
    {
        Test11_3AClass->setWindowTitle(QApplication::translate("Test11_3AClass", "Test11_3A", 0, QApplication::UnicodeUTF8));
        btnRelease->setText(QApplication::translate("Test11_3AClass", "\344\270\213\350\220\275", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test11_3AClass: public Ui_Test11_3AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST11_3A_H
