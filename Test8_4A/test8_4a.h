#ifndef TEST8_4A_H
#define TEST8_4A_H

#include <QtGui/QMainWindow>
#include "ui_test8_4a.h"
#include <vector>
using std::vector;
#include <QTime>

class Test8_4A : public QMainWindow
{
	Q_OBJECT

public:
	Test8_4A(const vector<char*> data,QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test8_4A();

private slots:
	int OnbtnStrat(bool);

private:
	Ui::Test8_4AClass ui;
	vector<char*> PhoneNums;
	int size;
	int n;
	int choose;

	void timerEvent(QTimerEvent *event);
	int timerid;
};

#endif // TEST8_4A_H
