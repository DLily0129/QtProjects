#ifndef KIDWIN_H
#define KIDWIN_H

#include <QWidget>
#include "ui_KidWin.h"

class KidWin : public QWidget
{
	Q_OBJECT

public:
	KidWin(QWidget *parent = 0);
	~KidWin();

private slots:
    int OnClickedBtnOK(bool checked);

private:
	Ui::KidWin ui;
};

#endif // KIDWIN_H
