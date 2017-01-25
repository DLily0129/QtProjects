#ifndef TEST11_5A_H
#define TEST11_5A_H

#include <QtGui/QMainWindow>
#include "ui_test11_5a.h"

class Test11_5A : public QMainWindow
{
	Q_OBJECT

public:
	Test11_5A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test11_5A();

private:
	Ui::Test11_5AClass ui;
	void paintEvent(QPaintEvent *event);
};

#endif // TEST11_5A_H
