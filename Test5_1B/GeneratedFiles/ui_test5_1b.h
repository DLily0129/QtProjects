/********************************************************************************
** Form generated from reading UI file 'test5_1b.ui'
**
** Created: Tue Jul 26 19:38:39 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST5_1B_H
#define UI_TEST5_1B_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QTextBrowser>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Test5_1BClass
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QCheckBox *ChkBxAgreed;
    QPushButton *btnNext;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *Test5_1BClass)
    {
        if (Test5_1BClass->objectName().isEmpty())
            Test5_1BClass->setObjectName(QString::fromUtf8("Test5_1BClass"));
        Test5_1BClass->resize(580, 376);
        centralWidget = new QWidget(Test5_1BClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_2 = new QVBoxLayout(centralWidget);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(centralWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        ChkBxAgreed = new QCheckBox(centralWidget);
        ChkBxAgreed->setObjectName(QString::fromUtf8("ChkBxAgreed"));

        verticalLayout->addWidget(ChkBxAgreed);


        verticalLayout_2->addLayout(verticalLayout);

        btnNext = new QPushButton(centralWidget);
        btnNext->setObjectName(QString::fromUtf8("btnNext"));

        verticalLayout_2->addWidget(btnNext);

        Test5_1BClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(Test5_1BClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 580, 21));
        Test5_1BClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(Test5_1BClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        Test5_1BClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(Test5_1BClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        Test5_1BClass->setStatusBar(statusBar);

        retranslateUi(Test5_1BClass);

        QMetaObject::connectSlotsByName(Test5_1BClass);
    } // setupUi

    void retranslateUi(QMainWindow *Test5_1BClass)
    {
        Test5_1BClass->setWindowTitle(QApplication::translate("Test5_1BClass", "Test5_1B", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("Test5_1BClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:600;\">\345\220\214\346\204\217\346\234\254\345\215\217\350\256\256</span> </p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px"
                        ";\">    \350\257\267\345\212\241\345\277\205\344\273\224\347\273\206\351\230\205\350\257\273\345\222\214\347\220\206\350\247\243\346\255\244\347\250\273\345\243\263\346\220\234\346\220\234\350\275\257\344\273\266\346\234\200\347\273\210\347\224\250\346\210\267\350\256\270\345\217\257\345\215\217\350\256\256\357\274\210\342\200\234\346\234\254\343\200\212\345\215\217\350\256\256\343\200\213\342\200\235\357\274\211\344\270\255\350\247\204\345\256\232\347\232\204\346\211\200\346\234\211\346\235\203\345\210\251\345\222\214\351\231\220\345\210\266\343\200\202\345\234\250\345\256\211<span style=\" font-weight:600;\">\350\243\205\346\234\254\342\200\234\350\275\257\344\273\266\342\200\235\346\227\266\357\274\214\346\202\250\351\234\200\350\246\201\344\273\224\347\273\206\351\230\205\350\257\273\345\271\266\345\206\263\345\256\232\346\216\245\345\217\227\346\210\226\344\270\215\346\216\245\345\217\227\346\234\254\343\200\212\345\215\217\350\256\256\343\200\213\347\232\204\346\235\241\346\254\276\343\200\202\351\231\244"
                        "\351\235\236\346\210\226\347\233\264\350\207\263\346\202\250\346\216\245\345\217\227\346\234\254\343\200\212\345\215\217\350\256\256\343\200\213\347\232\204\345\205\250\351\203\250\346\235\241\346\254\276\357\274\214\345\220\246\345\210\231\346\202\250\344\270\215\345\276\227\345\260\206\346\234\254\342\200\234\350\275\257\344\273\266\342\200\235\345\256\211\350\243\205\345\234\250\344\273\273\344\275\225\350\256\241\347\256\227\346\234\272\344\270\212\343\200\202\345\220\214\346\227\266\346\202\250\345\234\250\344\275\277\347\224\250\346\234\254\342\200\234\350\275\257\344\273\266\342\200\235\346\227\266\350\277\230\351\234\200\345\220\214\346\227\266\351\201\265\345\256\210\346\202\250\344\270\272\350\216\267\345\276\227\346\234\254\342\200\234\350\275\257\344\273\266\342\200\235\347\232\204\345\220\210\346\263\225\346\216\210\346\235\203\350\200\214\344\270\216\351\207\221\345\261\261\345\212\236\345\205\254\347\255\276\350\256\242\347\232\204\345\205\266\344\273\226\345\215\217\350\256\256\357\274\210\345\246"
                        "\202\346\234\211\357\274\211\344\270\255\347\232\204\345\205\250\351\203\250\346\235\241\346\254\276\345\222\214\346\235\241\344\273\266\343\200\202</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        ChkBxAgreed->setText(QApplication::translate("Test5_1BClass", "\345\220\214\346\204\217\346\234\254\345\215\217\350\256\256", 0, QApplication::UnicodeUTF8));
        btnNext->setText(QApplication::translate("Test5_1BClass", "\344\270\213\344\270\200\346\255\245", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Test5_1BClass: public Ui_Test5_1BClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST5_1B_H
