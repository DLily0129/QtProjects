#ifndef TEST8_2A_H
#define TEST8_2A_H

#include <QtGui/QMainWindow>
#include "ui_test8_2a.h"
#include <QTime>

class Test8_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test8_2A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test8_2A();

private:
	Ui::Test8_2AClass ui;

public:
	void timerEvent(QTimerEvent *event);

private:
	int timeid;
};

#endif // TEST8_2A_H
