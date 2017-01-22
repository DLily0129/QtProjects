/********************************************************************************
** Form generated from reading UI file 'test8_2a.ui'
**
** Created: Sat Aug 6 10:40:07 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST8_2A_H
#define UI_TEST8_2A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test8_2AClass
{
public:
    QWidget *centralWidget;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test8_2AClass)
    {
        if (Test8_2AClass->objectName().isEmpty())
            Test8_2AClass->setObjectName(QString::fromUtf8("Test8_2AClass"));
        Test8_2AClass->resize(481, 318);
        centralWidget = new QWidget(Test8_2AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(120, 90, 241, 81));
        QFont font;
        font.setFamily(QString::fromUtf8("Arial Rounded MT Bold"));
        font.setPointSize(36);
        plainTextEdit->setFont(font);
        Test8_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test8_2AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 481, 21));
        Test8_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test8_2AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test8_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test8_2AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test8_2AClass->setStatusBar(statusBar);

        retranslateUi(Test8_2AClass);

        QMetaObject::connectSlotsByName(Test8_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test8_2AClass)
    {
        Test8_2AClass->setWindowTitle(QApplication::translate("Test8_2AClass", "Test8_2A", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QString());
    } // retranslateUi

};

namespace Ui {
    class Test8_2AClass: public Ui_Test8_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST8_2A_H
