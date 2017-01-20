#ifndef _REGION_SELECTOR_H
#define _REGION_SELECTOR_H

#include <QDialog>
#include <QtGui>
#include <QtGui/QPixmap>


/* AfRegionSelector
	ͼ������ѡ����������һ��ͼ��ѡ��һ������

	���ߣ��۷�
	�汾: 2016-03-14
	����: http://afanihao.cn 
	
	������Ϊ C/C++ѧϰָ��(ʵսƪ) �ٷ�ʾ�����룬���°汾�뵽��������
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

	QSound m_shutter; // ������
	QPoint m_start, m_end;
	QPoint m_pos;
	bool m_dragging;

public:
	QRect selectRegion; // ���ѡ�е�����
};

#endif // RegionSelector_H
