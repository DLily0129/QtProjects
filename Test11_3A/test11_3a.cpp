#include "test11_3a.h"

Test11_3A::Test11_3A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

// 	int width=this->width();
// 	int height=this->height();

	circle=new Circle(this);
	circle->resize(30,30);
	circle->move(30,30);
	circle->show();

	connect(ui.btnRelease,SIGNAL(clicked()),this,SLOT(OnbtnRelease()));
    time=0;
}

Test11_3A::~Test11_3A()
{

}

int Test11_3A::OnbtnRelease()
{
    delete circle;
	m_circle=new Circle(this);
	m_circle->resize(30,30);
	startTimer(500);
 	return 0;
}

void Test11_3A::timerEvent(QTimerEvent *event)
{
	m_circle->move(30,30+(++time)*(++time));
	m_circle->show();
	//time++;  
}

