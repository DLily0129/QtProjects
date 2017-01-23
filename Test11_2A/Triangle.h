#ifndef TRIANGLE_H
#define TRIANGLE_H

#include <QFrame>

class Triangle : public QFrame
{
	Q_OBJECT

public:
	Triangle(QWidget *parent);
	~Triangle();

private:
	void paintEvent(QPaintEvent *event);
};

#endif // TRIANGLE_H
