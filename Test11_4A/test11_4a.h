#ifndef TEST11_4A_H
#define TEST11_4A_H

#include <QtGui/QMainWindow>
#include "ui_test11_4a.h"

class Test11_4A : public QMainWindow
{
	Q_OBJECT

public:
	Test11_4A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test11_4A();

private:
	Ui::Test11_4AClass ui;

	void paintEvent(QPaintEvent *event);
};

#endif // TEST11_4A_H
