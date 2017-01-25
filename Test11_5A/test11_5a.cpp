#include "test11_5a.h"
#include <QPainter>

Test11_5A::Test11_5A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
}

Test11_5A::~Test11_5A()
{

}

void Test11_5A::paintEvent(QPaintEvent *event)
{
     QPixmap pixmap(":/Test11_5A/Resources/poster.jpg");
	 QPainter painter(this);
	 painter.drawPixmap(0,0,280,390,pixmap);
}
