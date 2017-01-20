#ifndef TEST7_2B_H
#define TEST7_2B_H

#include <QtGui/QMainWindow>
#include "ui_test7_2b.h"

class Test7_2B : public QMainWindow
{
	Q_OBJECT

public:
	Test7_2B(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test7_2B();

private slots:
	int OnbtnLogin();

private slots:
	int OnbtnCancel();

private:
	Ui::Test7_2BClass ui;
};

#endif // TEST7_2B_H
