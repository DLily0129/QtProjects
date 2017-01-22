/********************************************************************************
** Form generated from reading UI file 'ChangeDlg.ui'
**
** Created: Fri Aug 12 19:12:49 2016
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
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChangeDlg
{
public:
    QLineEdit *leditNum;
    QLineEdit *leditPhoneNum;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnOK;

    void setupUi(QDialog *ChangeDlg)
    {
        if (ChangeDlg->objectName().isEmpty())
            ChangeDlg->setObjectName(QString::fromUtf8("ChangeDlg"));
        ChangeDlg->resize(510, 45);
        leditNum = new QLineEdit(ChangeDlg);
        leditNum->setObjectName(QString::fromUtf8("leditNum"));
        leditNum->setGeometry(QRect(60, 10, 31, 21));
        leditPhoneNum = new QLineEdit(ChangeDlg);
        leditPhoneNum->setObjectName(QString::fromUtf8("leditPhoneNum"));
        leditPhoneNum->setGeometry(QRect(180, 10, 211, 21));
        label = new QLabel(ChangeDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 36, 16));
        layoutWidget = new QWidget(ChangeDlg);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(100, 10, 62, 14));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        btnOK = new QPushButton(ChangeDlg);
        btnOK->setObjectName(QString::fromUtf8("btnOK"));
        btnOK->setGeometry(QRect(420, 10, 75, 23));

        retranslateUi(ChangeDlg);

        QMetaObject::connectSlotsByName(ChangeDlg);
    } // setupUi

    void retranslateUi(QDialog *ChangeDlg)
    {
        ChangeDlg->setWindowTitle(QApplication::translate("ChangeDlg", "\346\233\264\346\224\271\345\217\267\347\240\201", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("ChangeDlg", "\346\233\264\346\224\271\347\254\254", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("ChangeDlg", "\345\217\267\357\274\214 ", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("ChangeDlg", "\346\224\271\344\270\272", 0, QApplication::UnicodeUTF8));
        btnOK->setText(QApplication::translate("ChangeDlg", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ChangeDlg: public Ui_ChangeDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEDLG_H
