#ifndef TEST7_2A_H
#define TEST7_2A_H

#include <QtGui/QMainWindow>
#include "ui_test7_2a.h"

class Test7_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test7_2A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test7_2A();

private slots:
	int OnbtnOpen();

private slots:
	int OnbtnSave();


private:
	Ui::Test7_2AClass ui;

};

#endif // TEST7_2A_H
