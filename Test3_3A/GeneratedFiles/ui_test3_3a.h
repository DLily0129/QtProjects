/********************************************************************************
** Form generated from reading UI file 'test3_3a.ui'
**
** Created: Tue Jul 19 11:29:41 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST3_3A_H
#define UI_TEST3_3A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test3_3AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test3_3AClass)
    {
        if (Test3_3AClass->objectName().isEmpty())
            Test3_3AClass->setObjectName(QString::fromUtf8("Test3_3AClass"));
        Test3_3AClass->resize(477, 329);
        centralWidget = new QWidget(Test3_3AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);


        verticalLayout->addLayout(horizontalLayout);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        Test3_3AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test3_3AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 477, 21));
        Test3_3AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test3_3AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test3_3AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test3_3AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test3_3AClass->setStatusBar(statusBar);

        retranslateUi(Test3_3AClass);

        QMetaObject::connectSlotsByName(Test3_3AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test3_3AClass)
    {
        Test3_3AClass->setWindowTitle(QApplication::translate("Test3_3AClass", "Test3_3A", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("Test3_3AClass", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test3_3AClass: public Ui_Test3_3AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST3_3A_H
