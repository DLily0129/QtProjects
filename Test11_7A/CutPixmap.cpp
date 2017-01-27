#include "CutPixmap.h"
#include <QMouseEvent>

CutPixmap::CutPixmap(QWidget *parent)
	: QFrame(parent)
{
     m_pixmap.load(":/Test11_7A/Resources/poster.jpg");
	 m_mousepressed=false;
	 m_start=m_end=QPoint(0,0);
}

CutPixmap::~CutPixmap()
{

}

void CutPixmap::paintEvent(QPaintEvent *event)
{
     QPainter painter(this);
	 int width=this->width();
	 int height=this->height();
	 painter.drawPixmap(0,0,width,height,m_pixmap);
	 
	 QRect fullrect(0,0,width,height);
	 if (m_mousepressed==true)
	 {
        painter.setBrush(QBrush(QColor(0,0,0,100)));
		
		QRect selectedrect(m_start,m_end);
		painter.setClipRegion(QRegion(fullrect)-QRegion(selectedrect));
		painter.drawRect(fullrect);
	 } 

}

void CutPixmap::mousePressEvent(QMouseEvent *event)
{
     m_mousepressed=true;
	 m_start=event->pos();
	 m_end=QPoint(m_start);
	 update();
}

void CutPixmap::mouseMoveEvent(QMouseEvent *event)
{
    m_end=event->pos();
	update();
}

void CutPixmap::mouseReleaseEvent(QMouseEvent *event)
{
    QRect selectedrect(m_start,m_end);
	emit Released(selectedrect);
}