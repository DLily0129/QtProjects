/********************************************************************************
** Form generated from reading UI file 'ChangeDlg.ui'
**
** Created: Sun Aug 28 13:46:54 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEDLG_H
#define UI_CHANGEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ChangeDlg
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit;
    QPushButton *btnChangeOk;

    void setupUi(QDialog *ChangeDlg)
    {
        if (ChangeDlg->objectName().isEmpty())
            ChangeDlg->setObjectName(QString::fromUtf8("ChangeDlg"));
        ChangeDlg->resize(562, 54);
        horizontalLayout = new QHBoxLayout(ChangeDlg);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        lineEdit = new QLineEdit(ChangeDlg);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout->addWidget(lineEdit);

        btnChangeOk = new QPushButton(ChangeDlg);
        btnChangeOk->setObjectName(QString::fromUtf8("btnChangeOk"));

        horizontalLayout->addWidget(btnChangeOk);


        retranslateUi(ChangeDlg);

        QMetaObject::connectSlotsByName(ChangeDlg);
    } // setupUi

    void retranslateUi(QDialog *ChangeDlg)
    {
        ChangeDlg->setWindowTitle(QApplication::translate("ChangeDlg", "ChangeDlg", 0, QApplication::UnicodeUTF8));
        btnChangeOk->setText(QApplication::translate("ChangeDlg", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChangeDlg: public Ui_ChangeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEDLG_H
