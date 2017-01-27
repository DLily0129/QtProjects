#ifndef SCREENSHOT_H
#define SCREENSHOT_H

#include <QDialog>
#include "ui_ScreenShot.h"
#include <QPainter>

class ScreenShot : public QDialog
{
	Q_OBJECT

public:
	ScreenShot(const QPixmap &pixmap,QWidget *parent = 0);
	~ScreenShot();

private:
	Ui::ScreenShot ui;

	void paintEvent(QPaintEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);

	QPixmap m_pixmap;
	QPoint m_start,m_end;
	bool ispressed;

public:
	QRect m_screenshotRect;
};

#endif // SCREENSHOT_H
