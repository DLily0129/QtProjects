#include "ScreenShot.h"
#include <QMouseEvent>

ScreenShot::ScreenShot(const QPixmap &pixmap,QWidget *parent)
	: QDialog(parent),m_pixmap(pixmap)
{
	ui.setupUi(this);
	showFullScreen();
	ispressed=false;
}

ScreenShot::~ScreenShot()
{

}

void ScreenShot::paintEvent(QPaintEvent *event)
{
   QPainter painter(this);

   int width=this->width();
   int height=this->height();

   painter.drawPixmap(0,0,m_pixmap);
   
   painter.setBrush(QBrush(QColor(0,0,0,50)));
   QRect full(0,0,width,height);

   if (ispressed==true)
   {
	   painter.setClipRegion(QRegion(full)-QRegion(QRect(m_start,m_end)));
	   painter.drawRect(full);
   }
   else
   {
	   painter.drawRect(full);
   }
   
}

void ScreenShot::mousePressEvent(QMouseEvent *event)
{
    ispressed=true;
	m_start=QPoint(event->pos());
}

void ScreenShot::mouseMoveEvent(QMouseEvent *event)
{
    m_end=QPoint(event->pos());
	update();
}

void ScreenShot::mouseReleaseEvent(QMouseEvent *event)
{
    m_screenshotRect=QRect(m_start,m_end);
	accept();
}
