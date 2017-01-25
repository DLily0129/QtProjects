#include "test11_3b.h"
#include <QPainter>

Test11_3B::Test11_3B(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	time=0;

	startTimer(200);
	 
}

Test11_3B::~Test11_3B()
{

}

void Test11_3B::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

	painter.setBrush(QBrush(QColor(100,255,20)));
	painter.drawEllipse(20,20+2*time*time,30,30);
	time=time+1;
}

void Test11_3B::timerEvent(QTimerEvent *event)
{
	update();
}


