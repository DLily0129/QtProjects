/********************************************************************************
** Form generated from reading UI file 'DlgTxt.ui'
**
** Created: Thu Aug 4 19:37:23 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DLGTXT_H
#define UI_DLGTXT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DlgTxt
{
public:
    QVBoxLayout *verticalLayout;
    QPlainTextEdit *plainTextEdit;
    QHBoxLayout *horizontalLayout;
    QPushButton *btnOpen;
    QPushButton *btnSave;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnClose;

    void setupUi(QDialog *DlgTxt)
    {
        if (DlgTxt->objectName().isEmpty())
            DlgTxt->setObjectName(QString::fromUtf8("DlgTxt"));
        DlgTxt->resize(609, 428);
        verticalLayout = new QVBoxLayout(DlgTxt);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        plainTextEdit = new QPlainTextEdit(DlgTxt);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));

        verticalLayout->addWidget(plainTextEdit);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        btnOpen = new QPushButton(DlgTxt);
        btnOpen->setObjectName(QString::fromUtf8("btnOpen"));

        horizontalLayout->addWidget(btnOpen);

        btnSave = new QPushButton(DlgTxt);
        btnSave->setObjectName(QString::fromUtf8("btnSave"));

        horizontalLayout->addWidget(btnSave);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        btnClose = new QPushButton(DlgTxt);
        btnClose->setObjectName(QString::fromUtf8("btnClose"));

        horizontalLayout->addWidget(btnClose);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(DlgTxt);

        QMetaObject::connectSlotsByName(DlgTxt);
    } // setupUi

    void retranslateUi(QDialog *DlgTxt)
    {
        DlgTxt->setWindowTitle(QApplication::translate("DlgTxt", "\350\256\260\344\272\213\346\234\254", 0, QApplication::UnicodeUTF8));
        btnOpen->setText(QApplication::translate("DlgTxt", "\346\211\223\345\274\200", 0, QApplication::UnicodeUTF8));
        btnSave->setText(QApplication::translate("DlgTxt", "\344\277\235\345\255\230", 0, QApplication::UnicodeUTF8));
        btnClose->setText(QApplication::translate("DlgTxt", "\345\205\263\351\227\255", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DlgTxt: public Ui_DlgTxt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DLGTXT_H
