/********************************************************************************
** Form generated from reading UI file 'test7_3a.ui'
**
** Created: Thu Aug 4 11:41:07 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST7_3A_H
#define UI_TEST7_3A_H

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

class Ui_Test7_3AClass
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

    void setupUi(QMainWindow *Test7_3AClass)
    {
        if (Test7_3AClass->objectName().isEmpty())
            Test7_3AClass->setObjectName(QString::fromUtf8("Test7_3AClass"));
        Test7_3AClass->resize(472, 313);
        centralWidget = new QWidget(Test7_3AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        labelTitle = new QLabel(centralWidget);
        labelTitle->setObjectName(QString::fromUtf8("labelTitle"));
        labelTitle->setGeometry(QRect(120, 0, 221, 101));
        labelTitle->setStyleSheet(QString::fromUtf8("font: 24pt \"\345\215\216\346\226\207\350\241\214\346\245\267\";\n"
"color: rgb(170, 0, 127);"));
        labelTitle->setTextFormat(Qt::AutoText);
        labelTitle->setAlignment(Qt::AlignCenter);
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 100, 391, 161));
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

        Test7_3AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test7_3AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 472, 21));
        Test7_3AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test7_3AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test7_3AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test7_3AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test7_3AClass->setStatusBar(statusBar);

        retranslateUi(Test7_3AClass);

        QMetaObject::connectSlotsByName(Test7_3AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test7_3AClass)
    {
        Test7_3AClass->setWindowTitle(QApplication::translate("Test7_3AClass", "Test7_3A", 0, QApplication::UnicodeUTF8));
        labelTitle->setText(QApplication::translate("Test7_3AClass", "\345\257\206\347\240\201\350\256\260\344\272\213\346\234\254", 0, QApplication::UnicodeUTF8));
        labelUser->setText(QApplication::translate("Test7_3AClass", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        labelPasswd->setText(QApplication::translate("Test7_3AClass", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        btnLogin->setText(QApplication::translate("Test7_3AClass", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("Test7_3AClass", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test7_3AClass: public Ui_Test7_3AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST7_3A_H
