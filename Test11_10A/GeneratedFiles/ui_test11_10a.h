/********************************************************************************
** Form generated from reading UI file 'test11_10a.ui'
**
** Created: Sat Aug 27 19:51:13 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST11_10A_H
#define UI_TEST11_10A_H

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

class Ui_Test11_10AClass
{
public:
    QAction *actionScreenshot;
    QAction *actionSave;
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test11_10AClass)
    {
        if (Test11_10AClass->objectName().isEmpty())
            Test11_10AClass->setObjectName(QString::fromUtf8("Test11_10AClass"));
        Test11_10AClass->resize(600, 400);
        actionScreenshot = new QAction(Test11_10AClass);
        actionScreenshot->setObjectName(QString::fromUtf8("actionScreenshot"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Test11_10A/Resources/screenshot.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionScreenshot->setIcon(icon);
        actionSave = new QAction(Test11_10AClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Test11_10A/Resources/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon1);
        centralWidget = new QWidget(Test11_10AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Test11_10AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test11_10AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        Test11_10AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test11_10AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test11_10AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test11_10AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test11_10AClass->setStatusBar(statusBar);

        mainToolBar->addAction(actionScreenshot);
        mainToolBar->addAction(actionSave);

        retranslateUi(Test11_10AClass);

        QMetaObject::connectSlotsByName(Test11_10AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test11_10AClass)
    {
        Test11_10AClass->setWindowTitle(QApplication::translate("Test11_10AClass", "Test11_10A", 0, QApplication::UnicodeUTF8));
        actionScreenshot->setText(QApplication::translate("Test11_10AClass", "Screenshot", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("Test11_10AClass", "Save", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test11_10AClass: public Ui_Test11_10AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST11_10A_H
