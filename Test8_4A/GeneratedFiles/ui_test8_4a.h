/********************************************************************************
** Form generated from reading UI file 'test8_4a.ui'
**
** Created: Tue Aug 9 16:22:14 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST8_4A_H
#define UI_TEST8_4A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test8_4AClass
{
public:
    QWidget *centralWidget;
    QToolButton *btnStrat;
    QTextEdit *txeditShowChosen;
    QLabel *label;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test8_4AClass)
    {
        if (Test8_4AClass->objectName().isEmpty())
            Test8_4AClass->setObjectName(QString::fromUtf8("Test8_4AClass"));
        Test8_4AClass->resize(483, 161);
        centralWidget = new QWidget(Test8_4AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        btnStrat = new QToolButton(centralWidget);
        btnStrat->setObjectName(QString::fromUtf8("btnStrat"));
        btnStrat->setGeometry(QRect(280, 10, 37, 91));
        btnStrat->setCheckable(true);
        btnStrat->setAutoRaise(false);
        txeditShowChosen = new QTextEdit(centralWidget);
        txeditShowChosen->setObjectName(QString::fromUtf8("txeditShowChosen"));
        txeditShowChosen->setGeometry(QRect(340, 0, 111, 111));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 30, 231, 61));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 0);\n"
"font: 26pt \"\345\276\256\350\275\257\351\233\205\351\273\221\";"));
        Test8_4AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test8_4AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 483, 21));
        Test8_4AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test8_4AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test8_4AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test8_4AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test8_4AClass->setStatusBar(statusBar);

        retranslateUi(Test8_4AClass);

        QMetaObject::connectSlotsByName(Test8_4AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test8_4AClass)
    {
        Test8_4AClass->setWindowTitle(QApplication::translate("Test8_4AClass", "\346\212\275\345\245\226", 0, QApplication::UnicodeUTF8));
        btnStrat->setText(QApplication::translate("Test8_4AClass", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Test8_4AClass: public Ui_Test8_4AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST8_4A_H
