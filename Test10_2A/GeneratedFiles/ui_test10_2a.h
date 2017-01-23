/********************************************************************************
** Form generated from reading UI file 'test10_2a.ui'
**
** Created: Tue Aug 16 21:07:45 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST10_2A_H
#define UI_TEST10_2A_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test10_2AClass
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave;
    QWidget *centralWidget;
    QHBoxLayout *horizontalLayout;
    QPlainTextEdit *plainTextEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test10_2AClass)
    {
        if (Test10_2AClass->objectName().isEmpty())
            Test10_2AClass->setObjectName(QString::fromUtf8("Test10_2AClass"));
        Test10_2AClass->resize(644, 604);
        actionNew = new QAction(Test10_2AClass);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Test10_2A/Resources/filenew.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(Test10_2AClass);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/Test10_2A/Resources/fileopen.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave = new QAction(Test10_2AClass);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        actionSave->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/Test10_2A/Resources/filesave.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon2);
        centralWidget = new QWidget(Test10_2AClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        horizontalLayout = new QHBoxLayout(centralWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(3, 0, 3, 0);
        plainTextEdit = new QPlainTextEdit(centralWidget);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setStyleSheet(QString::fromUtf8("\n"
"font: 14pt \"\345\256\213\344\275\223\";"));

        horizontalLayout->addWidget(plainTextEdit);

        Test10_2AClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test10_2AClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 644, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        Test10_2AClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test10_2AClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test10_2AClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test10_2AClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test10_2AClass->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionSave);
        mainToolBar->addSeparator();

        retranslateUi(Test10_2AClass);

        QMetaObject::connectSlotsByName(Test10_2AClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test10_2AClass)
    {
        Test10_2AClass->setWindowTitle(QApplication::translate("Test10_2AClass", "Test10_2A", 0, QApplication::UnicodeUTF8));
        actionNew->setText(QApplication::translate("Test10_2AClass", "new", 0, QApplication::UnicodeUTF8));
        actionOpen->setText(QApplication::translate("Test10_2AClass", "open", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("Test10_2AClass", "save", 0, QApplication::UnicodeUTF8));
        plainTextEdit->setPlainText(QApplication::translate("Test10_2AClass", "Using QPlainTextEdit as a Display Widget\n"
"\n"
"The text is set or replaced using setPlainText() which deletes the existing text and replaces it with the text passed to setPlainText().\n"
"Text can be inserted using the QTextCursor class or using the convenience functions insertPlainText(), appendPlainText() or paste().\n"
"", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("Test10_2AClass", "File", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test10_2AClass: public Ui_Test10_2AClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST10_2A_H
