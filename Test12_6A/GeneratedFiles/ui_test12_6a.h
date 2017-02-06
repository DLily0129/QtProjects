/********************************************************************************
** Form generated from reading UI file 'test12_6a.ui'
**
** Created: Sat Sep 3 20:05:29 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST12_6A_H
#define UI_TEST12_6A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QTreeWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test12_6AClass
{
public:
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QTreeWidget *treeWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test12_6AClass)
    {
        if (Test12_6AClass->objectName().isEmpty())
            Test12_6AClass->setObjectName(QString::fromUtf8("Test12_6AClass"));
        Test12_6AClass->resize(600, 400);
        centralWidget = new QWidget(Test12_6AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        treeWidget = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("1"));
        treeWidget->setHeaderItem(__qtreewidgetitem);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setAlternatingRowColors(true);
        treeWidget->setRootIsDecorated(true);

        horizontalLayout->addWidget(treeWidget);

        Test12_6AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test12_6AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        Test12_6AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test12_6AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test12_6AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test12_6AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test12_6AClass->setStatusBar(statusBar);

        retranslateUi(Test12_6AClass);

        QMetaObject::connectSlotsByName(Test12_6AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test12_6AClass)
    {
        Test12_6AClass->setWindowTitle(QApplication::translate("Test12_6AClass", "Test12_6A", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test12_6AClass: public Ui_Test12_6AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST12_6A_H
