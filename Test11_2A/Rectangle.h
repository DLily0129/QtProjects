#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <QFrame>

class Rectangle : public QFrame
{
	Q_OBJECT

public:
	Rectangle(QWidget *parent);
	~Rectangle();

private:
	void paintEvent(QPaintEvent *event);
};

#endif // RECTANGLE_H
