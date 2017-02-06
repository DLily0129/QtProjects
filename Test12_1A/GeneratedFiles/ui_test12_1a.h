/********************************************************************************
** Form generated from reading UI file 'test12_1a.ui'
**
** Created: Sun Aug 28 10:26:10 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST12_1A_H
#define UI_TEST12_1A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test12_1AClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnStartIn;
    QListWidget *listWidget;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAddIn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnChange;
    QSpacerItem *horizontalSpacer_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test12_1AClass)
    {
        if (Test12_1AClass->objectName().isEmpty())
            Test12_1AClass->setObjectName(QString::fromUtf8("Test12_1AClass"));
        Test12_1AClass->resize(600, 400);
        centralWidget = new QWidget(Test12_1AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setStyleSheet(QString::fromUtf8("font: 11pt \"AcadEref\";\n"
"color: rgb(0, 170, 127);"));

        horizontalLayout->addWidget(label_2);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        btnStartIn = new QPushButton(centralWidget);
        btnStartIn->setObjectName(QString::fromUtf8("btnStartIn"));

        horizontalLayout->addWidget(btnStartIn);


        verticalLayout->addLayout(horizontalLayout);

        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        verticalLayout->addWidget(listWidget);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnAddIn = new QPushButton(centralWidget);
        btnAddIn->setObjectName(QString::fromUtf8("btnAddIn"));

        horizontalLayout_2->addWidget(btnAddIn);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);

        btnChange = new QPushButton(centralWidget);
        btnChange->setObjectName(QString::fromUtf8("btnChange"));

        horizontalLayout_2->addWidget(btnChange);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout_2);

        Test12_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test12_1AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 21));
        Test12_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test12_1AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test12_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test12_1AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test12_1AClass->setStatusBar(statusBar);

        retranslateUi(Test12_1AClass);

        QMetaObject::connectSlotsByName(Test12_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test12_1AClass)
    {
        Test12_1AClass->setWindowTitle(QApplication::translate("Test12_1AClass", "Test12_1A", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Test12_1AClass", "\345\217\267\347\240\201\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        btnStartIn->setText(QApplication::translate("Test12_1AClass", "\350\277\233\345\205\245\346\212\275\345\245\226", 0, QApplication::UnicodeUTF8));
        btnAddIn->setText(QApplication::translate("Test12_1AClass", "\346\267\273\345\212\240\345\217\267\347\240\201", 0, QApplication::UnicodeUTF8));
        btnChange->setText(QApplication::translate("Test12_1AClass", "\346\233\264\346\224\271\345\217\267\347\240\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test12_1AClass: public Ui_Test12_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST12_1A_H
