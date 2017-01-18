/********************************************************************************
** Form generated from reading UI file 'test5_4a.ui'
**
** Created: Tue Jul 26 20:45:07 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST5_4A_H
#define UI_TEST5_4A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test5_4AClass
{
public:
    QWidget *centralWidget;
    QToolButton *tbtnHelp;
    QToolButton *tbtnTool;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test5_4AClass)
    {
        if (Test5_4AClass->objectName().isEmpty())
            Test5_4AClass->setObjectName(QString::fromUtf8("Test5_4AClass"));
        Test5_4AClass->resize(436, 257);
        centralWidget = new QWidget(Test5_4AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tbtnHelp = new QToolButton(centralWidget);
        tbtnHelp->setObjectName(QString::fromUtf8("tbtnHelp"));
        tbtnHelp->setGeometry(QRect(90, 40, 61, 71));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/help/Resources/t01ff6ed998d8b95204.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnHelp->setIcon(icon);
        tbtnHelp->setIconSize(QSize(48, 48));
        tbtnHelp->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        tbtnHelp->setAutoRaise(true);
        tbtnTool = new QToolButton(centralWidget);
        tbtnTool->setObjectName(QString::fromUtf8("tbtnTool"));
        tbtnTool->setGeometry(QRect(210, 40, 61, 71));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/tool/Resources/t01fc862f64d1a8634c.png"), QSize(), QIcon::Normal, QIcon::Off);
        tbtnTool->setIcon(icon1);
        tbtnTool->setIconSize(QSize(48, 48));
        tbtnTool->setCheckable(true);
        tbtnTool->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        Test5_4AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test5_4AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 436, 21));
        Test5_4AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test5_4AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test5_4AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test5_4AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test5_4AClass->setStatusBar(statusBar);

        retranslateUi(Test5_4AClass);

        QMetaObject::connectSlotsByName(Test5_4AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test5_4AClass)
    {
        Test5_4AClass->setWindowTitle(QApplication::translate("Test5_4AClass", "Test5_4A", 0, QApplication::UnicodeUTF8));
        tbtnHelp->setText(QApplication::translate("Test5_4AClass", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        tbtnTool->setText(QApplication::translate("Test5_4AClass", "\345\267\245\345\205\267", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test5_4AClass: public Ui_Test5_4AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST5_4A_H
