#ifndef CIRCLE_H
#define CIRCLE_H

#include <QFrame>

class Circle : public QFrame
{
	Q_OBJECT

public:
	Circle(QWidget *parent);
	~Circle();

private:
	void paintEvent(QPaintEvent *event);
	
};

#endif // CIRCLE_H
