#ifndef _REGION_SELECTOR_H
#define _REGION_SELECTOR_H

#include <QDialog>
#include <QtGui>
#include <QtGui/QPixmap>


/* AfRegionSelector
	图像区域选择器。加载一个图像，选择一个区域。

	作者：邵发
	版本: 2016-03-14
	官网: http://afanihao.cn 
	
	本代码为 C/C++学习指南(实战篇) 官方示例代码，最新版本请到官网下载
*/

class AfRegionSelector : public QDialog
{
	Q_OBJECT

public:
	AfRegionSelector(const QPixmap& screen, QWidget *parent = 0);
	~AfRegionSelector();

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
