#include "test7_2b.h"
#include <QMessageBox>
#include "GBK.h"
#include "DlgTxt.h"

Test7_2B::Test7_2B(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	ui.leditUser->setText("Lily");
	connect(ui.btnLogin,SIGNAL(clicked()),this,SLOT(OnbtnLogin()));
	connect(ui.btnCancel,SIGNAL(clicked()),this,SLOT(OnbtnCancel()));
	connect(ui.leditPasswd,SIGNAL(returnPressed()),this,SLOT(OnbtnLogin()));
}

Test7_2B::~Test7_2B()
{

}

int Test7_2B::OnbtnLogin()
{
    QString Passwd=ui.leditPasswd->text();
	if (Passwd=="")
    {
		QMessageBox::information(this,"Failed",GBK::ToQString("«Î ‰»Î√‹¬Î"));
    } 
    else if(Passwd=="jk19970129")
    {
        DlgTxt txt;
		txt.exec();
    }
	else
	{
		QMessageBox::information(this,"Error",GBK::ToQString("√‹¬Î¥ÌŒÛ"));
	}
	return 0;
}

int Test7_2B::OnbtnCancel()
{
    close();
	return 0;
}