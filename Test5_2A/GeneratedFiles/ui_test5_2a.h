/********************************************************************************
** Form generated from reading UI file 'test5_2a.ui'
**
** Created: Mon Jul 25 10:46:57 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST5_2A_H
#define UI_TEST5_2A_H

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

class Ui_Test5_2AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *labelUser;
    QLineEdit *leditUser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelPasswd;
    QLineEdit *leditPasswd;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test5_2AClass)
    {
        if (Test5_2AClass->objectName().isEmpty())
            Test5_2AClass->setObjectName(QString::fromUtf8("Test5_2AClass"));
        Test5_2AClass->resize(292, 203);
        centralWidget = new QWidget(Test5_2AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        labelUser = new QLabel(centralWidget);
        labelUser->setObjectName(QString::fromUtf8("labelUser"));
        labelUser->setMinimumSize(QSize(35, 0));
        labelUser->setLineWidth(0);

        horizontalLayout->addWidget(labelUser);

        leditUser = new QLineEdit(centralWidget);
        leditUser->setObjectName(QString::fromUtf8("leditUser"));
        leditUser->setMaxLength(16);
        leditUser->setEchoMode(QLineEdit::Normal);

        horizontalLayout->addWidget(leditUser);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelPasswd = new QLabel(centralWidget);
        labelPasswd->setObjectName(QString::fromUtf8("labelPasswd"));
        labelPasswd->setMinimumSize(QSize(35, 0));
        labelPasswd->setFrameShadow(QFrame::Plain);
        labelPasswd->setLineWidth(0);
        labelPasswd->setTextFormat(Qt::AutoText);
        labelPasswd->setScaledContents(false);

        horizontalLayout_2->addWidget(labelPasswd);

        leditPasswd = new QLineEdit(centralWidget);
        leditPasswd->setObjectName(QString::fromUtf8("leditPasswd"));
        leditPasswd->setMaxLength(16);
        leditPasswd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(leditPasswd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        btnOK = new QPushButton(centralWidget);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout_3->addWidget(btnOK);


        verticalLayout->addLayout(horizontalLayout_3);

        Test5_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test5_2AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 292, 21));
        Test5_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test5_2AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test5_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test5_2AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test5_2AClass->setStatusBar(statusBar);

        retranslateUi(Test5_2AClass);

        QMetaObject::connectSlotsByName(Test5_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test5_2AClass)
    {
        Test5_2AClass->setWindowTitle(QApplication::translate("Test5_2AClass", "Test5_2A", 0, QApplication::UnicodeUTF8));
        labelUser->setText(QApplication::translate("Test5_2AClass", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        leditUser->setInputMask(QString());
        leditUser->setText(QString());
        leditUser->setPlaceholderText(QApplication::translate("Test5_2AClass", "\350\257\267\350\276\223\345\205\245\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        labelPasswd->setText(QApplication::translate("Test5_2AClass", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        leditPasswd->setPlaceholderText(QApplication::translate("Test5_2AClass", "\350\257\267\350\276\223\345\205\245\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("Test5_2AClass", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test5_2AClass: public Ui_Test5_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST5_2A_H
