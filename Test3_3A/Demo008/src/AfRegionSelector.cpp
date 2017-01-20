#include "AfRegionSelector.h"
#include <QtGui>

AfRegionSelector::AfRegionSelector(const QPixmap& screen,QWidget *parent)
	: QDialog(parent), m_image(screen), m_shutter("shutter.wav")
{	
	// ��paintEvent֮ǰ��Ч
	m_dragging = false;
	setMouseTracking(true);

	setWindowFlags(Qt::Dialog | Qt::FramelessWindowHint);	
	//showMaximized();
	showFullScreen();

	if(! QSound::isAvailable())
	{
		qDebug("sound system not available!\n");
	}
}

AfRegionSelector::~AfRegionSelector()
{
}

void AfRegionSelector::paintEvent(QPaintEvent *event)
 {
	// �ȵ���QT��ܵĻ����������Ҫ͸������Ҫ��Ҫ�������
	QWidget::paintEvent(event); 

	int w = width(), h = height();
	
	// ������ͼƬ 
	QPainter painter(this);
	QRectF target(0,0, width(),height());
	QRectF source(0,0, m_image.width(), m_image.height());
	painter.drawPixmap(target, m_image, source);

	// ��ʮ����
	int x = m_pos.x(), y = m_pos.y();
	//x -= 1; y -= 1;
	x += 1; y += 1;
	//qDebug("repaint: (%dx%d)", x, y);
	painter.setPen(QColor(60,60,60, 150));
	painter.drawLine(0, y, w, y);
	painter.drawLine(x, 0, x, h);
	painter.setPen(QColor(160,160,160, 150));
	painter.drawLine(0, y, w, y);
	painter.drawLine(x, 0, x, h);

	if(m_dragging)
	{
		QRect selected(m_start, m_pos);
		// ����
		painter.setPen(QColor(30,30,30));
		painter.drawRect(selected);

		// ��ʾ�ı�����ѡ����Ĵ�С
		QRect textRect(0,0, 50, 16);
		textRect.moveCenter(selected.center());
		// �ı�����
		painter.setBrush(QColor(30,30,30));
		painter.drawRect(textRect);
		// �ı�
		painter.setPen(QColor(255,255,255));
		char text[32];
		sprintf(text, "%dx%d", selected.width(), selected.height());
		painter.drawText(textRect, Qt::AlignCenter, text);
	}
}

void AfRegionSelector::mouseMoveEvent ( QMouseEvent * event )
{
	m_pos = event->pos();
	update();
}

void AfRegionSelector::mousePressEvent ( QMouseEvent * event )
{
	m_dragging = true;
	m_start = event->pos();
}

void AfRegionSelector::mouseReleaseEvent ( QMouseEvent * event )
{
	m_end = event->pos();
	m_dragging = false;
	update();

	// �޶�����ѡ��16x16����
	if(m_end.x() > m_start.x() + 16 && m_end.y() > m_start.y() + 16)
	{
 		m_shutter.play();
		selectRegion = QRect(m_start, m_end);
		accept();
	}
}



