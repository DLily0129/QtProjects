#ifndef TEST11_3A_H
#define TEST11_3A_H

#include <QtGui/QMainWindow>
#include "ui_test11_3a.h"
#include "Circle.h"

class Test11_3A : public QMainWindow
{
	Q_OBJECT

public:
	Test11_3A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test11_3A();

private:
	Ui::Test11_3AClass ui;

private slots:
	int OnbtnRelease();

private:
	void timerEvent(QTimerEvent *event);
	//void paintEvent(QPaintEvent *event);
	Circle *m_circle;
	Circle *circle;
	int time;


};

#endif // TEST11_3A_H

