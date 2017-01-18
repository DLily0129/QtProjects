#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>
#include "ui_LoginDlg.h"

class LoginDlg : public QDialog
{
	Q_OBJECT

public:
	LoginDlg(QWidget *parent = 0);
	~LoginDlg();

private slots:
	int OnbtnCancel();

private slots:
	int OnbtnRegister_2();

private:
	Ui::LoginDlg ui;

public:
	QString name;
	QString passwd;
	QString passwdagain;
};

#endif // LOGINDLG_H
