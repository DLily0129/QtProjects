#ifndef CUTPIXMAP_H
#define CUTPIXMAP_H

#include <QFrame>
#include <QPainter>

class CutPixmap : public QFrame
{
	Q_OBJECT

signals:
    void Released(QRect selected);

public:
	CutPixmap(QWidget *parent);
	~CutPixmap();

private:
	QPixmap m_pixmap;
	bool m_mousepressed;
	QPoint m_start;
	QPoint m_end;
	
	void paintEvent(QPaintEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);
};

#endif // CUTPIXMAP_H
