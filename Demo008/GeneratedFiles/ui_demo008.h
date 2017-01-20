/********************************************************************************
** Form generated from reading UI file 'demo008.ui'
**
** Created: Mon Mar 14 09:13:49 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEMO008_H
#define UI_DEMO008_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "afqt/AfPicture.h"

QT_BEGIN_NAMESPACE

class Ui_Demo008Class
{
public:
    QAction *actionCapture;
    QAction *actionSave;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    AfPicture *frame;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Demo008Class)
    {
        if (Demo008Class->objectName().isEmpty())
            Demo008Class->setObjectName(QString::fromUtf8("Demo008Class"));
        Demo008Class->resize(564, 310);
        actionCapture = new QAction(Demo008Class);
        actionCapture->setObjectName(QString::fromUtf8("actionCapture"));
        actionSave = new QAction(Demo008Class);
        actionSave->setObjectName(QString::fromUtf8("actionSave"));
        centralWidget = new QWidget(Demo008Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(0);
        verticalLayout->setContentsMargins(9, 9, 9, 9);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        frame = new AfPicture(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::Box);
        frame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(frame);

        Demo008Class->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Demo008Class);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 564, 23));
        Demo008Class->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Demo008Class);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Demo008Class->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Demo008Class);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Demo008Class->setStatusBar(statusBar);

        mainToolBar->addAction(actionCapture);
        mainToolBar->addAction(actionSave);

        retranslateUi(Demo008Class);

        QMetaObject::connectSlotsByName(Demo008Class);
    } // setupUi

    void retranslateUi(QMainWindow *Demo008Class)
    {
        Demo008Class->setWindowTitle(QApplication::translate("Demo008Class", "Demo008", 0, QApplication::UnicodeUTF8));
        actionCapture->setText(QApplication::translate("Demo008Class", "\346\210\252\345\233\276", 0, QApplication::UnicodeUTF8));
        actionSave->setText(QApplication::translate("Demo008Class", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Demo008Class: public Ui_Demo008Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEMO008_H
