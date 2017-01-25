#ifndef TEST11_3B_H
#define TEST11_3B_H

#include <QtGui/QMainWindow>
#include "ui_test11_3b.h"

class Test11_3B : public QMainWindow
{
	Q_OBJECT

public:
	Test11_3B(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test11_3B();

private:
	Ui::Test11_3BClass ui;

	int time;


private:
	void paintEvent(QPaintEvent *event);
	void timerEvent(QTimerEvent *event);


};

#endif // TEST11_3B_H
