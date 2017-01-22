/********************************************************************************
** Form generated from reading UI file 'test8_4b.ui'
**
** Created: Sun Aug 14 11:46:02 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST8_4B_H
#define UI_TEST8_4B_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
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

class Ui_Test8_4BClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *btnStartIn;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnAddIn;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnChange;
    QSpacerItem *horizontalSpacer_3;
    QFrame *line;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test8_4BClass)
    {
        if (Test8_4BClass->objectName().isEmpty())
            Test8_4BClass->setObjectName(QString::fromUtf8("Test8_4BClass"));
        Test8_4BClass->resize(581, 388);
        centralWidget = new QWidget(Test8_4BClass);
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

        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setStyleSheet(QString::fromUtf8("font: 11pt \"AcadEref\";"));
        plainTextEdit->setReadOnly(true);

        verticalLayout->addWidget(plainTextEdit);

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

        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line);

        Test8_4BClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test8_4BClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 581, 21));
        Test8_4BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test8_4BClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test8_4BClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test8_4BClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test8_4BClass->setStatusBar(statusBar);

        retranslateUi(Test8_4BClass);

        QMetaObject::connectSlotsByName(Test8_4BClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test8_4BClass)
    {
        Test8_4BClass->setWindowTitle(QApplication::translate("Test8_4BClass", "Test8_4B", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Test8_4BClass", "\345\217\267\347\240\201\345\210\227\350\241\250", 0, QApplication::UnicodeUTF8));
        btnStartIn->setText(QApplication::translate("Test8_4BClass", "\350\277\233\345\205\245\346\212\275\345\245\226", 0, QApplication::UnicodeUTF8));
        btnAddIn->setText(QApplication::translate("Test8_4BClass", "\346\267\273\345\212\240\345\217\267\347\240\201", 0, QApplication::UnicodeUTF8));
        btnChange->setText(QApplication::translate("Test8_4BClass", "\346\233\264\346\224\271\345\217\267\347\240\201", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test8_4BClass: public Ui_Test8_4BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST8_4B_H
