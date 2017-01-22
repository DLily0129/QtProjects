#ifndef SENDDLG_H
#define SENDDLG_H

#include <QDialog>
#include "ui_SendDlg.h"
#include "TaskThread.h"

class SendDlg : public QDialog
{
	Q_OBJECT

public:
	SendDlg(const QString filepath,QWidget *parent = 0);
	~SendDlg();

private:
	Ui::SendDlg ui;
    TaskThread *m_task;
	
	virtual void timerEvent(QTimerEvent *event);
    int timerid;

private slots:
	int OnbtnCancel();
};

#endif // SENDDLG_H
