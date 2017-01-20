#ifndef DLGTXT_H
#define DLGTXT_H

#include <QDialog>
#include "ui_DlgTxt.h"

class DlgTxt : public QDialog
{
	Q_OBJECT

public:
	DlgTxt(QWidget *parent = 0);
	~DlgTxt();

private slots:
	int OnbtnClose();

private slots:
	int OnbtnOpen();

private slots:
	int OnbtnSave();

private:
	Ui::DlgTxt ui;
};

#endif // DLGTXT_H
