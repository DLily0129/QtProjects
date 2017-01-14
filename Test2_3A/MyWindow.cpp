#include "MyWindow.h"

MyWindow::MyWindow(QWidget *parent)
	: QWidget(parent)
{
    m_button=new QPushButton(this);
	m_button->setText("Hello Qt");
	m_button->setGeometry(100,100,200,50);
}

MyWindow::~MyWindow()
{

}
