#ifndef ADDINDLG_H
#define ADDINDLG_H

#include <QDialog>
#include "ui_AddInDlg.h"

class AddInDlg : public QDialog
{
	Q_OBJECT

public:
	AddInDlg(QWidget *parent = 0);
	~AddInDlg();

public:
	Ui::AddInDlg ui;

	
};

#endif // ADDINDLG_H
