#include "Triangle.h"
#include <QPainter>

Triangle::Triangle(QWidget *parent)
	: QFrame(parent)
{

}

Triangle::~Triangle()
{

}

void Triangle::paintEvent(QPaintEvent *event)
{
	int width=this->width();
	int height=this->height();

	QRect rect(0,0,width,height);
	QPolygon triangle(3);
	triangle.setPoint(0,rect.center().x(),rect.top());
	triangle.setPoint(1,rect.left(),rect.bottom());
	triangle.setPoint(2,rect.right(),rect.bottom());

	QPainter painter(this);
	painter.setBrush(QBrush(QColor(100,160,255),Qt::DiagCrossPattern));
	painter.drawPolygon(triangle);
}
