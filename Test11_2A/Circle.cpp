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
	int width=this->width();
	int height=this->height();

    QPainter painter(this);
	painter.setBrush(QBrush(QColor(169,50,170),Qt::CrossPattern));
	painter.setPen(Qt::DotLine);
	
	painter.drawEllipse(0,0,width,height);
}
