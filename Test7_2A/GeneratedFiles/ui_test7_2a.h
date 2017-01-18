/********************************************************************************
** Form generated from reading UI file 'test7_2a.ui'
**
** Created: Wed Aug 3 10:55:04 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST7_2A_H
#define UI_TEST7_2A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
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

class Ui_Test7_2AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOpen;
    QPushButton *btnSave;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test7_2AClass)
    {
        if (Test7_2AClass->objectName().isEmpty())
            Test7_2AClass->setObjectName(QString::fromUtf8("Test7_2AClass"));
        Test7_2AClass->resize(476, 335);
        centralWidget = new QWidget(Test7_2AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnOpen = new QPushButton(centralWidget);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));

        horizontalLayout->addWidget(btnOpen);

        btnSave = new QPushButton(centralWidget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout->addWidget(btnSave);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout->addLayout(horizontalLayout);

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        Test7_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test7_2AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 476, 21));
        Test7_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test7_2AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test7_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test7_2AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test7_2AClass->setStatusBar(statusBar);

        retranslateUi(Test7_2AClass);

        QMetaObject::connectSlotsByName(Test7_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test7_2AClass)
    {
        Test7_2AClass->setWindowTitle(QApplication::translate("Test7_2AClass", "Test7_2A", 0, QApplication::UnicodeUTF8));
        btnOpen->setText(QApplication::translate("Test7_2AClass", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("Test7_2AClass", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test7_2AClass: public Ui_Test7_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST7_2A_H
