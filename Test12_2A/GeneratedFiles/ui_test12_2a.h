/********************************************************************************
** Form generated from reading UI file 'test12_2a.ui'
**
** Created: Fri Sep 2 18:49:18 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST12_2A_H
#define UI_TEST12_2A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test12_2AClass
{
public:
    QAction *actionDel;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test12_2AClass)
    {
        if (Test12_2AClass->objectName().isEmpty())
            Test12_2AClass->setObjectName(QString::fromUtf8("Test12_2AClass"));
        Test12_2AClass->resize(471, 326);
        actionDel = new QAction(Test12_2AClass);
        actionDel->setObjectName(QString::fromUtf8("actionDel"));
        centralWidget = new QWidget(Test12_2AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setEditTriggers(QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);

        horizontalLayout->addWidget(listWidget);

        Test12_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test12_2AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 471, 21));
        Test12_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test12_2AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test12_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test12_2AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test12_2AClass->setStatusBar(statusBar);

        retranslateUi(Test12_2AClass);

        QMetaObject::connectSlotsByName(Test12_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test12_2AClass)
    {
        Test12_2AClass->setWindowTitle(QApplication::translate("Test12_2AClass", "Test12_2A", 0, QApplication::UnicodeUTF8));
        actionDel->setText(QApplication::translate("Test12_2AClass", "\345\210\240\351\231\244", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test12_2AClass: public Ui_Test12_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST12_2A_H
