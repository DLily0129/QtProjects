/********************************************************************************
** Form generated from reading UI file 'test5_5a.ui'
**
** Created: Mon Aug 1 10:11:43 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST5_5A_H
#define UI_TEST5_5A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test5_5AClass
{
public:
    QWidget *centralWidget;
    QLabel *labelLogo;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_3;
    QLabel *labelUser;
    QLineEdit *leditUser;
    QPushButton *btnRegister;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labePasswd;
    QLineEdit *leditPasswd;
    QPushButton *btnPasswd;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSignIn;
    QPushButton *btnClose;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test5_5AClass)
    {
        if (Test5_5AClass->objectName().isEmpty())
            Test5_5AClass->setObjectName(QString::fromUtf8("Test5_5AClass"));
        Test5_5AClass->resize(444, 360);
        centralWidget = new QWidget(Test5_5AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        labelLogo = new QLabel(centralWidget);
        labelLogo->setObjectName(QString::fromUtf8("labelLogo"));
        labelLogo->setGeometry(QRect(10, 0, 421, 141));
        labelLogo->setPixmap(QPixmap(QString::fromUtf8(":/Test5_5A/Resources/t01a2f5215738aea84c.jpg")));
        labelLogo->setScaledContents(false);
        labelLogo->setAlignment(Qt::AlignCenter);
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 160, 361, 31));
        horizontalLayout_3 = new QHBoxLayout(widget);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        labelUser = new QLabel(widget);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));
        labelUser->setMinimumSize(QSize(80, 0));
        labelUser->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"font: 12pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"color: rgb(0, 0, 0);"));
        labelUser->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(labelUser);

        leditUser = new QLineEdit(widget);
        leditUser->setObjectName(QString::fromUtf8("leditUser"));

        horizontalLayout_3->addWidget(leditUser);

        btnRegister = new QPushButton(widget);
        btnRegister->setObjectName(QString::fromUtf8("btnRegister"));

        horizontalLayout_3->addWidget(btnRegister);

        widget1 = new QWidget(centralWidget);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(30, 210, 361, 31));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        labePasswd = new QLabel(widget1);
        labePasswd->setObjectName(QString::fromUtf8("labePasswd"));
        labePasswd->setMinimumSize(QSize(80, 0));
        labePasswd->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 127);\n"
"font: 12pt \"\345\215\216\346\226\207\346\226\260\351\255\217\";\n"
"color: rgb(0, 0, 0);"));
        labePasswd->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labePasswd);

        leditPasswd = new QLineEdit(widget1);
        leditPasswd->setObjectName(QString::fromUtf8("leditPasswd"));
        leditPasswd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(leditPasswd);

        btnPasswd = new QPushButton(widget1);
        btnPasswd->setObjectName(QString::fromUtf8("btnPasswd"));

        horizontalLayout_2->addWidget(btnPasswd);

        widget2 = new QWidget(centralWidget);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(50, 270, 381, 31));
        horizontalLayout = new QHBoxLayout(widget2);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnSignIn = new QPushButton(widget2);
        btnSignIn->setObjectName(QString::fromUtf8("btnSignIn"));

        horizontalLayout->addWidget(btnSignIn);

        btnClose = new QPushButton(widget2);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);

        Test5_5AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test5_5AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 444, 21));
        Test5_5AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test5_5AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test5_5AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test5_5AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test5_5AClass->setStatusBar(statusBar);

        retranslateUi(Test5_5AClass);

        QMetaObject::connectSlotsByName(Test5_5AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test5_5AClass)
    {
        Test5_5AClass->setWindowTitle(QApplication::translate("Test5_5AClass", "Test5_5A", 0, QApplication::UnicodeUTF8));
        labelLogo->setText(QString());
        labelUser->setText(QApplication::translate("Test5_5AClass", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        btnRegister->setText(QApplication::translate("Test5_5AClass", "\346\263\250\345\206\214\345\270\220\345\217\267", 0, QApplication::UnicodeUTF8));
        labePasswd->setText(QApplication::translate("Test5_5AClass", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        btnPasswd->setText(QApplication::translate("Test5_5AClass", "\345\277\230\350\256\260\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        btnSignIn->setText(QApplication::translate("Test5_5AClass", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("Test5_5AClass", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test5_5AClass: public Ui_Test5_5AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST5_5A_H
