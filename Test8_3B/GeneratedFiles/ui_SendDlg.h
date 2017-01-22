/********************************************************************************
** Form generated from reading UI file 'SendDlg.ui'
**
** Created: Mon Aug 8 16:12:39 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SENDDLG_H
#define UI_SENDDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SendDlg
{
public:
    QHBoxLayout *horizontalLayout;
    QProgressBar *progressBar;
    QPushButton *btnCancel;

    void setupUi(QDialog *SendDlg)
    {
        if (SendDlg->objectName().isEmpty())
            SendDlg->setObjectName(QString::fromUtf8("SendDlg"));
        SendDlg->resize(539, 57);
        horizontalLayout = new QHBoxLayout(SendDlg);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        progressBar = new QProgressBar(SendDlg);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(0);

        horizontalLayout->addWidget(progressBar);

        btnCancel = new QPushButton(SendDlg);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout->addWidget(btnCancel);


        retranslateUi(SendDlg);

        QMetaObject::connectSlotsByName(SendDlg);
    } // setupUi

    void retranslateUi(QDialog *SendDlg)
    {
        SendDlg->setWindowTitle(QApplication::translate("SendDlg", "\346\255\243\345\234\250\344\270\212\344\274\240", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("SendDlg", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class SendDlg: public Ui_SendDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SENDDLG_H
