/********************************************************************************
** Form generated from reading UI file 'test9_1a.ui'
**
** Created: Mon Aug 15 18:29:34 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST9_1A_H
#define UI_TEST9_1A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test9_1AClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QAction *actionClose;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnCloseCurrent;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnNew;
    QPushButton *btnSave;
    QPushButton *btnOpen;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;

    void setupUi(QMainWindow *Test9_1AClass)
    {
        if (Test9_1AClass->objectName().isEmpty())
            Test9_1AClass->setObjectName(QString::fromUtf8("Test9_1AClass"));
        Test9_1AClass->resize(548, 393);
        actionNew = new QAction(Test9_1AClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Test9_1A/Resources/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(Test9_1AClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Test9_1A/Resources/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(Test9_1AClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Test9_1A/Resources/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        actionClose = new QAction(Test9_1AClass);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/Test9_1A/Resources/closetab.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionClose->setIcon(icon3);
        centralWidget = new QWidget(Test9_1AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(centralWidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setTabShape(QTabWidget::Rounded);
        tabWidget->setDocumentMode(false);

        verticalLayout->addWidget(tabWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnCloseCurrent = new QPushButton(centralWidget);
        btnCloseCurrent->setObjectName(QString::fromUtf8("btnCloseCurrent"));

        horizontalLayout->addWidget(btnCloseCurrent);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnNew = new QPushButton(centralWidget);
        btnNew->setObjectName(QString::fromUtf8("btnNew"));

        horizontalLayout->addWidget(btnNew);

        btnSave = new QPushButton(centralWidget);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout->addWidget(btnSave);

        btnOpen = new QPushButton(centralWidget);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));

        horizontalLayout->addWidget(btnOpen);


        verticalLayout->addLayout(horizontalLayout);

        Test9_1AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test9_1AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 548, 21));
        Test9_1AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test9_1AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test9_1AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);

        mainToolBar->addAction(actionNew);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionOpen);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionClose);
        mainToolBar->addSeparator();

        retranslateUi(Test9_1AClass);

        tabWidget->setCurrentIndex(-1);


        QMetaObject::connectSlotsByName(Test9_1AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test9_1AClass)
    {
        Test9_1AClass->setWindowTitle(QApplication::translate("Test9_1AClass", "Test9_1A", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("Test9_1AClass", "new", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("Test9_1AClass", "open", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("Test9_1AClass", "save", 0, QApplication::UnicodeUTF8));
        actionClose->setText(QApplication::translate("Test9_1AClass", "close", 0, QApplication::UnicodeUTF8));
        btnCloseCurrent->setText(QApplication::translate("Test9_1AClass", "\345\205\263\351\227\255\345\275\223\345\211\215\351\200\211\351\241\271\345\215\241", 0, QApplication::UnicodeUTF8));
        btnNew->setText(QApplication::translate("Test9_1AClass", "\346\226\260\345\273\272", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("Test9_1AClass", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        btnOpen->setText(QApplication::translate("Test9_1AClass", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test9_1AClass: public Ui_Test9_1AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST9_1A_H
