#include "MyWin.h"

MyWin::MyWin(QWidget *parent)
	: QWidget(parent)
{
   m_button=new QPushButton(parent);
   m_button->setText("Hello Qt");
   m_button->setGeometry(100,100,200,50);
}

MyWin::~MyWin()
{

}
