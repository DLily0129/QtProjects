#include "test5_2a.h"
#include <QMessageBox>

Test5_2A::Test5_2A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.btnOK,SIGNAL(clicked()),this,SLOT(OnbtnOk()));
	connect(ui.leditPasswd,SIGNAL(returnPressed ()),this,SLOT(OnbtnOk()));
}

Test5_2A::~Test5_2A()
{

}

int Test5_2A::OnbtnOk()
{
    QString User=ui.leditUser->text();
	QString Passwd=ui.leditPasswd->text();

	if (User=="Dlily"&&Passwd=="19970129")
	{
		QMessageBox::information(this,"OK","Good Input");
	} 
	else
	{
        QMessageBox::information(this,"NO","Bad Input");
	}
	return 0;
}