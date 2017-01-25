#ifndef TEST11_6A_H
#define TEST11_6A_H

#include <QtGui/QMainWindow>
#include "ui_test11_6a.h"
#include <QPainter>

class Test11_6A : public QMainWindow
{
	Q_OBJECT

public:
	Test11_6A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test11_6A();

private:
	Ui::Test11_6AClass ui;

	void paintEvent(QPaintEvent *event);
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	void mouseReleaseEvent(QMouseEvent *event);

private:
	QVector<QPoint> m_points;
	bool m_mousepressed;
};

#endif // TEST11_6A_H
