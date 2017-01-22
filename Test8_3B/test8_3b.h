#ifndef TEST8_3B_H
#define TEST8_3B_H

#include <QtGui/QMainWindow>
#include "ui_test8_3b.h"
#include "SendDlg.h"

class Test8_3B : public QMainWindow
{
	Q_OBJECT

public:
	Test8_3B(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test8_3B();

private:
	Ui::Test8_3BClass ui;
	QString m_filepath;
	SendDlg *m_send;

private slots:
	int OnbtnSelect();
	int OnbtnSend();
};

#endif // TEST8_3B_H
