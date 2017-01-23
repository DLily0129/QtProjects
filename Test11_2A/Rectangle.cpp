#include "Rectangle.h"
#include <QPainter>

Rectangle::Rectangle(QWidget *parent)
	: QFrame(parent)
{

}

Rectangle::~Rectangle()
{

}

void Rectangle::paintEvent(QPaintEvent *event)
{
     QPainter painter(this);

	 int m_width=this->width();
	 int m_height=this->height();

	 painter.setBrush(QBrush(QColor(255,137,150),Qt::Dense3Pattern));
	 painter.setPen(QColor(0,255,255));
	 painter.drawRect(0,0,m_width,m_height);
}
