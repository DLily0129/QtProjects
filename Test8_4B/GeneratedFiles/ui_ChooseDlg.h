/********************************************************************************
** Form generated from reading UI file 'ChooseDlg.ui'
**
** Created: Thu Aug 11 21:22:07 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHOOSEDLG_H
#define UI_CHOOSEDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPlainTextEdit>
#include <QtGui/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_ChooseDlg
{
public:
    QToolButton *btnStart;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;

    void setupUi(QDialog *ChooseDlg)
    {
        if (ChooseDlg->objectName().isEmpty())
            ChooseDlg->setObjectName(QString::fromUtf8("ChooseDlg"));
        ChooseDlg->resize(432, 138);
        btnStart = new QToolButton(ChooseDlg);
        btnStart->setObjectName(QString::fromUtf8("btnStart"));
        btnStart->setGeometry(QRect(270, 20, 31, 91));
        btnStart->setCheckable(true);
        label = new QLabel(ChooseDlg);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 241, 61));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);\n"
"color: rgb(0, 170, 0);\n"
"font: 20pt \"AcadEref\";"));
        plainTextEdit = new QPlainTextEdit(ChooseDlg);
        plainTextEdit->setObjectName(QString::fromUtf8("plainTextEdit"));
        plainTextEdit->setGeometry(QRect(312, 9, 111, 120));

        retranslateUi(ChooseDlg);

        QMetaObject::connectSlotsByName(ChooseDlg);
    } // setupUi

    void retranslateUi(QDialog *ChooseDlg)
    {
        ChooseDlg->setWindowTitle(QApplication::translate("ChooseDlg", "ChooseDlg", 0, QApplication::UnicodeUTF8));
        btnStart->setText(QApplication::translate("ChooseDlg", "\345\274\200\345\247\213", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ChooseDlg: public Ui_ChooseDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHOOSEDLG_H
