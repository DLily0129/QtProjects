#include "test11_6a.h"
#include <QDebug>
#include <QMouseEvent>

Test11_6A::Test11_6A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	m_mousepressed=false;
}

Test11_6A::~Test11_6A()
{

}

void Test11_6A::paintEvent(QPaintEvent *event)
{
     QPainter painter(this);
	 
	 QPen pen;
	 pen.setWidth(3);
	 pen.setStyle(Qt::SolidLine);
	 painter.setPen(pen);
	 if (m_mousepressed==true)
	 {
         painter.drawPoints(m_points.data(),m_points.size());
	 }
	
}

void Test11_6A::mousePressEvent(QMouseEvent *event)
{
     m_mousepressed=true;
	// m_points.clear();
}


/*  mouseMoveEvent() is called whenever the mouse moves while a mouse button is held down. 
This can be useful during drag and drop operations. If you call setMouseTracking(true), 
you get mouse move events even when no buttons are held down. (See also the Drag and Drop guide.) */

void Test11_6A::mouseMoveEvent(QMouseEvent *event)
{
    QPoint point=event->pos();
	m_points.append(point);
	//qDebug("(%d %d)",point.x(),point.y());
	update(); 
}

void Test11_6A::mouseReleaseEvent(QMouseEvent *event)
{
     
}
