/********************************************************************************
** Form generated from reading UI file 'KidWin.ui'
**
** Created: Tue Jul 26 19:38:40 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KIDWIN_H
#define UI_KIDWIN_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QTextBrowser>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_KidWin
{
public:
    QVBoxLayout *verticalLayout;
    QTextBrowser *textBrowser;
    QPushButton *pushButton;

    void setupUi(QWidget *KidWin)
    {
        if (KidWin->objectName().isEmpty())
            KidWin->setObjectName(QString::fromUtf8("KidWin"));
        KidWin->resize(247, 118);
        verticalLayout = new QVBoxLayout(KidWin);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        textBrowser = new QTextBrowser(KidWin);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout->addWidget(textBrowser);

        pushButton = new QPushButton(KidWin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout->addWidget(pushButton);


        retranslateUi(KidWin);

        QMetaObject::connectSlotsByName(KidWin);
    } // setupUi

    void retranslateUi(QWidget *KidWin)
    {
        KidWin->setWindowTitle(QApplication::translate("KidWin", "KidWin", 0, QApplication::UnicodeUTF8));
        textBrowser->setHtml(QApplication::translate("KidWin", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt;\">\346\202\250\350\277\230\346\234\252\345\220\214\346\204\217\346\234\254\345\215\217\350\256\256</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("KidWin", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class KidWin: public Ui_KidWin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KIDWIN_H
