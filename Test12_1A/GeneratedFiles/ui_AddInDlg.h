/********************************************************************************
** Form generated from reading UI file 'AddInDlg.ui'
**
** Created: Sun Aug 28 11:56:07 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDINDLG_H
#define UI_ADDINDLG_H

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

class Ui_AddInDlg
{
public:
    QHBoxLayout *horizontalLayout;
    QLineEdit *leditAdd;
    QPushButton *btnAdd;

    void setupUi(QDialog *AddInDlg)
    {
        if (AddInDlg->objectName().isEmpty())
            AddInDlg->setObjectName(QString::fromUtf8("AddInDlg"));
        AddInDlg->resize(461, 64);
        horizontalLayout = new QHBoxLayout(AddInDlg);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        leditAdd = new QLineEdit(AddInDlg);
        leditAdd->setObjectName(QString::fromUtf8("leditAdd"));
        leditAdd->setStyleSheet(QString::fromUtf8("font: 11pt \"AcadEref\";"));

        horizontalLayout->addWidget(leditAdd);

        btnAdd = new QPushButton(AddInDlg);
        btnAdd->setObjectName(QString::fromUtf8("btnAdd"));

        horizontalLayout->addWidget(btnAdd);


        retranslateUi(AddInDlg);

        QMetaObject::connectSlotsByName(AddInDlg);
    } // setupUi

    void retranslateUi(QDialog *AddInDlg)
    {
        AddInDlg->setWindowTitle(QApplication::translate("AddInDlg", "\346\267\273\345\212\240\345\217\267\347\240\201", 0, QApplication::UnicodeUTF8));
        btnAdd->setText(QApplication::translate("AddInDlg", "\346\267\273\345\212\240", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AddInDlg: public Ui_AddInDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDINDLG_H
