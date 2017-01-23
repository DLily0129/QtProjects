#ifndef TEST11_2A_H
#define TEST11_2A_H

#include <QtGui/QMainWindow>
#include "ui_test11_2a.h"
#include <QPainter>
#include "Rectangle.h"
#include "Circle.h"
#include "Triangle.h"

class Test11_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test11_2A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test11_2A();

private:
	Ui::Test11_2AClass ui;

private slots:
	int OnbtnRect();
	int OnbtnCircle();
	int OnbtnTriangle();
};

#endif // TEST11_2A_H
;