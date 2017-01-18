#ifndef TEST5_2A_H
#define TEST5_2A_H

#include <QtGui/QMainWindow>
#include "ui_test5_2a.h"

class Test5_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test5_2A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test5_2A();


private slots:
	int OnbtnOk();
private:
	Ui::Test5_2AClass ui;
};

#endif // TEST5_2A_H
