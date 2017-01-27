/********************************************************************************
** Form generated from reading UI file 'ScreenShot.ui'
**
** Created: Sat Aug 27 19:51:14 2016
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SCREENSHOT_H
#define UI_SCREENSHOT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_ScreenShot
{
public:

    void setupUi(QDialog *ScreenShot)
    {
        if (ScreenShot->objectName().isEmpty())
            ScreenShot->setObjectName(QString::fromUtf8("ScreenShot"));
        ScreenShot->resize(400, 300);

        retranslateUi(ScreenShot);

        QMetaObject::connectSlotsByName(ScreenShot);
    } // setupUi

    void retranslateUi(QDialog *ScreenShot)
    {
        ScreenShot->setWindowTitle(QApplication::translate("ScreenShot", "ScreenShot", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class ScreenShot: public Ui_ScreenShot {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SCREENSHOT_H
