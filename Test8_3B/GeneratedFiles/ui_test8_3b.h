/********************************************************************************
** Form generated from reading UI file 'test8_3b.ui'
**
** Created: Mon Aug 8 11:59:04 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST8_3B_H
#define UI_TEST8_3B_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test8_3BClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *lineEdit;
    QPushButton *btnSelect;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSend;
    QSpacerItem *horizontalSpacer_2;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test8_3BClass)
    {
        if (Test8_3BClass->objectName().isEmpty())
            Test8_3BClass->setObjectName(QString::fromUtf8("Test8_3BClass"));
        Test8_3BClass->resize(600, 127);
        centralWidget = new QWidget(Test8_3BClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setFocusPolicy(Qt::NoFocus);

        horizontalLayout_2->addWidget(lineEdit);

        btnSelect = new QPushButton(centralWidget);
        btnSelect->setObjectName(QString::fromUtf8("btnSelect"));

        horizontalLayout_2->addWidget(btnSelect);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSend = new QPushButton(centralWidget);
        btnSend->setObjectName(QString::fromUtf8("btnSend"));

        horizontalLayout->addWidget(btnSend);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout);

        Test8_3BClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test8_3BClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        Test8_3BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test8_3BClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test8_3BClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test8_3BClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test8_3BClass->setStatusBar(statusBar);

        retranslateUi(Test8_3BClass);

        QMetaObject::connectSlotsByName(Test8_3BClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test8_3BClass)
    {
        Test8_3BClass->setWindowTitle(QApplication::translate("Test8_3BClass", "Test8_3B", 0, QApplication::UnicodeUTF8));
        lineEdit->setPlaceholderText(QApplication::translate("Test8_3BClass", "\351\200\211\346\213\251\346\226\207\344\273\266", 0, QApplication::UnicodeUTF8));
        btnSelect->setText(QApplication::translate("Test8_3BClass", "\346\265\217\350\247\210", 0, QApplication::UnicodeUTF8));
        btnSend->setText(QApplication::translate("Test8_3BClass", "\344\270\212\344\274\240", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test8_3BClass: public Ui_Test8_3BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST8_3B_H
