#include "Circle.h"
#include <QPainter>

Circle::Circle(QWidget *parent)
	: QFrame(parent)
{

}

Circle::~Circle()
{

}

void Circle::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

	int width=this->width();
	int height=this->height();
	
	painter.setBrush(QBrush(QColor(200,50,70),Qt::Dense4Pattern));
	painter.drawEllipse(0,0,width,height);
}
