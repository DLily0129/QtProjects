/********************************************************************************
** Form generated from reading UI file 'test7_2b.ui'
**
** Created: Sun Aug 14 16:12:02 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST7_2B_H
#define UI_TEST7_2B_H

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
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test7_2BClass
{
public:
    QWidget *centralWidget;
    QLabel *labelTitle;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelUser;
    QLineEdit *leditUser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPasswd;
    QLineEdit *leditPasswd;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnLogin;
    QPushButton *btnCancel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test7_2BClass)
    {
        if (Test7_2BClass->objectName().isEmpty())
            Test7_2BClass->setObjectName(QString::fromUtf8("Test7_2BClass"));
        Test7_2BClass->resize(520, 359);
        centralWidget = new QWidget(Test7_2BClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        labelTitle = new QLabel(centralWidget);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(140, 10, 221, 101));
        labelTitle->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(170, 0, 127);"));
        labelTitle->setTextFormat(Qt::AutoText);
        labelTitle->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 120, 391, 161));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelUser = new QLabel(layoutWidget);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));
        labelUser->setMinimumSize(QSize(100, 0));
        labelUser->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(labelUser);

        leditUser = new QLineEdit(layoutWidget);
        leditUser->setObjectName(QString::fromUtf8("leditUser"));

        horizontalLayout->addWidget(leditUser);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelPasswd = new QLabel(layoutWidget);
        labelPasswd->setObjectName(QString::fromUtf8("labelPasswd"));
        labelPasswd->setMinimumSize(QSize(100, 0));
        labelPasswd->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(labelPasswd);

        leditPasswd = new QLineEdit(layoutWidget);
        leditPasswd->setObjectName(QString::fromUtf8("leditPasswd"));
        leditPasswd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(leditPasswd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnLogin = new QPushButton(layoutWidget);
        btnLogin->setObjectName(QString::fromUtf8("btnLogin"));

        horizontalLayout_3->addWidget(btnLogin);

        btnCancel = new QPushButton(layoutWidget);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_3->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout_3);

        Test7_2BClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test7_2BClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 520, 21));
        Test7_2BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test7_2BClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test7_2BClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test7_2BClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test7_2BClass->setStatusBar(statusBar);

        retranslateUi(Test7_2BClass);

        QMetaObject::connectSlotsByName(Test7_2BClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test7_2BClass)
    {
        Test7_2BClass->setWindowTitle(QApplication::translate("Test7_2BClass", "Test7_2B", 0, QApplication::UnicodeUTF8));
        labelTitle->setText(QApplication::translate("Test7_2BClass", "\345\257\206\347\240\201\350\256\260\344\272\213\346\234\254", 0, QApplication::UnicodeUTF8));
        labelUser->setText(QApplication::translate("Test7_2BClass", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        labelPasswd->setText(QApplication::translate("Test7_2BClass", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        leditPasswd->setPlaceholderText(QApplication::translate("Test7_2BClass", "\346\217\220\347\244\272\357\274\232\346\210\221\347\224\237\346\227\245", 0, QApplication::UnicodeUTF8));
        btnLogin->setText(QApplication::translate("Test7_2BClass", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("Test7_2BClass", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test7_2BClass: public Ui_Test7_2BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST7_2B_H
