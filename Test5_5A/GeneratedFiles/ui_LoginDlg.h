/********************************************************************************
** Form generated from reading UI file 'LoginDlg.ui'
**
** Created: Mon Aug 1 10:29:04 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LoginDlg
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *DlglEditUser;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *DlglEditPasswd;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *DlglEditPasswdAgain;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnRegiser_2;
    QPushButton *btnCancel;

    void setupUi(QDialog *LoginDlg)
    {
        if (LoginDlg->objectName().isEmpty())
            LoginDlg->setObjectName(QString::fromUtf8("LoginDlg"));
        LoginDlg->resize(341, 197);
        verticalLayout = new QVBoxLayout(LoginDlg);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(LoginDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 0));
        label->setAlignment(Qt::AlignCenter);

        horizontalLayout->addWidget(label);

        DlglEditUser = new QLineEdit(LoginDlg);
        DlglEditUser->setObjectName(QString::fromUtf8("DlglEditUser"));

        horizontalLayout->addWidget(DlglEditUser);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(LoginDlg);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 0));
        label_2->setAlignment(Qt::AlignCenter);

        horizontalLayout_2->addWidget(label_2);

        DlglEditPasswd = new QLineEdit(LoginDlg);
        DlglEditPasswd->setObjectName(QString::fromUtf8("DlglEditPasswd"));
        DlglEditPasswd->setEchoMode(QLineEdit::Password);

        horizontalLayout_2->addWidget(DlglEditPasswd);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(LoginDlg);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 0));
        label_3->setAlignment(Qt::AlignCenter);

        horizontalLayout_3->addWidget(label_3);

        DlglEditPasswdAgain = new QLineEdit(LoginDlg);
        DlglEditPasswdAgain->setObjectName(QString::fromUtf8("DlglEditPasswdAgain"));
        DlglEditPasswdAgain->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(DlglEditPasswdAgain);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        btnRegiser_2 = new QPushButton(LoginDlg);
        btnRegiser_2->setObjectName(QString::fromUtf8("btnRegiser_2"));

        horizontalLayout_4->addWidget(btnRegiser_2);

        btnCancel = new QPushButton(LoginDlg);
        btnCancel->setObjectName(QString::fromUtf8("btnCancel"));

        horizontalLayout_4->addWidget(btnCancel);


        verticalLayout->addLayout(horizontalLayout_4);


        retranslateUi(LoginDlg);

        QMetaObject::connectSlotsByName(LoginDlg);
    } // setupUi

    void retranslateUi(QDialog *LoginDlg)
    {
        LoginDlg->setWindowTitle(QApplication::translate("LoginDlg", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("LoginDlg", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LoginDlg", "\350\276\223\345\205\245\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LoginDlg", "\345\206\215\346\254\241\350\276\223\345\205\245\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        btnRegiser_2->setText(QApplication::translate("LoginDlg", "\346\263\250\345\206\214", 0, QApplication::UnicodeUTF8));
        btnCancel->setText(QApplication::translate("LoginDlg", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginDlg: public Ui_LoginDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
