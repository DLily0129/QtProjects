#ifndef CHANGEDLG_H
#define CHANGEDLG_H

#include <QDialog>
#include "ui_ChangeDlg.h"

class ChangeDlg : public QDialog
{
	Q_OBJECT

public:
	ChangeDlg(QWidget *parent = 0);
	~ChangeDlg();

public:
	Ui::ChangeDlg ui;
};

#endif // CHANGEDLG_H
