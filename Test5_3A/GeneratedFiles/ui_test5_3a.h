/********************************************************************************
** Form generated from reading UI file 'test5_3a.ui'
**
** Created: Mon Jul 25 17:19:42 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST5_3A_H
#define UI_TEST5_3A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
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

class Ui_Test5_3AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QComboBox *cbxFamilyMember;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *leditBirth;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnOK;
    QPushButton *btnClose;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test5_3AClass)
    {
        if (Test5_3AClass->objectName().isEmpty())
            Test5_3AClass->setObjectName(QString::fromUtf8("Test5_3AClass"));
        Test5_3AClass->resize(342, 185);
        centralWidget = new QWidget(Test5_3AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label);

        cbxFamilyMember = new QComboBox(centralWidget);
        cbxFamilyMember->setObjectName(QString::fromUtf8("cbxFamilyMember"));
        cbxFamilyMember->setMinimumSize(QSize(180, 0));

        horizontalLayout_3->addWidget(cbxFamilyMember);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(120, 0));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        leditBirth = new QLineEdit(centralWidget);
        leditBirth->setObjectName(QString::fromUtf8("leditBirth"));

        horizontalLayout_2->addWidget(leditBirth);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnOK = new QPushButton(centralWidget);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));

        horizontalLayout->addWidget(btnOK);

        btnClose = new QPushButton(centralWidget);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);

        Test5_3AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test5_3AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 342, 21));
        Test5_3AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test5_3AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test5_3AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test5_3AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test5_3AClass->setStatusBar(statusBar);

        retranslateUi(Test5_3AClass);

        QMetaObject::connectSlotsByName(Test5_3AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test5_3AClass)
    {
        Test5_3AClass->setWindowTitle(QApplication::translate("Test5_3AClass", "Test5_3A", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Test5_3AClass", "\345\256\266\345\272\255\346\210\220\345\221\230", 0, QApplication::UnicodeUTF8));
        cbxFamilyMember->clear();
        cbxFamilyMember->insertItems(0, QStringList()
         << QApplication::translate("Test5_3AClass", "\347\210\270\347\210\270", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Test5_3AClass", "\345\246\210\345\246\210", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Test5_3AClass", "\345\247\220\345\247\220", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Test5_3AClass", "\346\210\221", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("Test5_3AClass", "\347\224\237\346\227\245", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("Test5_3AClass", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("Test5_3AClass", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test5_3AClass: public Ui_Test5_3AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST5_3A_H
