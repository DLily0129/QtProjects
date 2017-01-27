#include "test11_7a.h"

Test11_7A::Test11_7A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.frame,SIGNAL(Released(QRect)),this,SLOT(OnReleased(QRect)));
	showed=false;
	m_pix.load(":/Test11_7A/Resources/poster.jpg");
}

Test11_7A::~Test11_7A()
{

}

int Test11_7A::OnReleased(QRect selected)
{
	m_width=selected.width();
	m_height=selected.height();
	m_topleft=selected.topLeft();
	m_bottomright=selected.bottomRight();
	showed=true;
	update();
	return 0;
}

void Test11_7A::paintEvent(QPaintEvent *event)
{
	QPainter painter(this);
    if (showed)
    {
// 		QRect source(m_topleft,m_bottomright);
// 		QRect target(350,20,m_width,m_height);
// 		painter.drawPixmap(target,m_pix,source);

		painter.drawRect(350,100,m_width,m_height);
    }
	
}

