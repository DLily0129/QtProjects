#ifndef _REGION_SELECTOR_H
#define _REGION_SELECTOR_H

#include <QDialog>
#include <QtGui>
#include <QtGui/QPixmap>

/* RegionSelector:
    用于选择屏幕区域
*/

class RegionSelector : public QDialog
{
	Q_OBJECT

public:
	RegionSelector(const QPixmap& screen, QWidget *parent = 0);
	~RegionSelector();

private:
	virtual void	paintEvent(QPaintEvent *event);
	virtual void	mouseMoveEvent ( QMouseEvent * event );
	virtual void	mousePressEvent ( QMouseEvent * event );
	virtual void	mouseReleaseEvent ( QMouseEvent * event );

private:
	QPixmap m_image;

	QSound m_shutter; // 快门声
	QPoint m_start, m_end;
	QPoint m_pos;
	bool m_dragging;

public:
	QRect selectRegion; // 输出选中的区域
};

#endif // RegionSelector_H
