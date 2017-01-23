#include "test11_2a.h"

Test11_2A::Test11_2A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	connect(ui.btnRect,SIGNAL(clicked()),this,SLOT(OnbtnRect()));
	connect(ui.btnCircle,SIGNAL(clicked()),this,SLOT(OnbtnCircle()));
	connect(ui.btnTriangle,SIGNAL(clicked()),this,SLOT(OnbtnTriangle()));
}

Test11_2A::~Test11_2A()
{

}

int Test11_2A::OnbtnRect()
{
//     Rectangle rect(this);
// 	rect.resize(200,200);
// 	rect.move(300,0);
// 	rect.show();  这种方法就不行      

	Rectangle *rect=new Rectangle(this);
	rect->resize(100,100);
	rect->move(300,0);
	rect->show();

	return 0;
}

int Test11_2A::OnbtnCircle()
{
    Circle *circle=new Circle(this);
	circle->resize(200,150);
    circle->move(200,200);
	circle->show();
	
	return 0;
}

int Test11_2A::OnbtnTriangle()
{
    Triangle *triangle=new Triangle(this);
	triangle->resize(100,120);
	triangle->move(400,100);
	triangle->show();
	return 0;
}
