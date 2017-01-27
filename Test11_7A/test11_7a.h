#ifndef TEST11_7A_H
#define TEST11_7A_H

#include <QtGui/QMainWindow>
#include "ui_test11_7a.h"
#include <QPainter>

class Test11_7A : public QMainWindow
{
	Q_OBJECT

public:
	Test11_7A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test11_7A();

private:
	Ui::Test11_7AClass ui;

private slots:
	int OnReleased(QRect selected);

private:
	void paintEvent(QPaintEvent *event);
	int m_width;
	int m_height;
	bool showed;
	QPixmap m_pix;
	QPoint m_topleft;
	QPoint m_bottomright;
};

#endif // TEST11_7A_H
