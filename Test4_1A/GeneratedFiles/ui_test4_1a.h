/********************************************************************************
** Form generated from reading UI file 'test4_1a.ui'
**
** Created: Sat Jul 23 16:16:11 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST4_1A_H
#define UI_TEST4_1A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test4_1AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnshow;
    QSpacerItem *horizontalSpacer;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test4_1AClass)
    {
        if (Test4_1AClass->objectName().isEmpty())
            Test4_1AClass->setObjectName(QString::fromUtf8("Test4_1AClass"));
        Test4_1AClass->resize(533, 351);
        centralWidget = new QWidget(Test4_1AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnshow = new QPushButton(centralWidget);
        btnshow->setObjectName(QString::fromUtf8("btnshow"));

        horizontalLayout->addWidget(btnshow);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);


        verticalLayout_2->addLayout(verticalLayout);

        Test4_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test4_1AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 533, 21));
        Test4_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test4_1AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test4_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test4_1AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test4_1AClass->setStatusBar(statusBar);

        retranslateUi(Test4_1AClass);

        QMetaObject::connectSlotsByName(Test4_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test4_1AClass)
    {
        Test4_1AClass->setWindowTitle(QApplication::translate("Test4_1AClass", "Test4_1A", 0, QApplication::UnicodeUTF8));
        btnshow->setText(QApplication::translate("Test4_1AClass", "show", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test4_1AClass: public Ui_Test4_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST4_1A_H
