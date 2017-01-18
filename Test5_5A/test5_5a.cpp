#include "test5_5a.h"
#include "LoginDlg.h"
#include <QMessageBox>
#include "GBK.h"

Test5_5A::Test5_5A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.btnClose,SIGNAL(clicked()),this,SLOT(OnbtnClose()));
	connect(ui.btnSignIn,SIGNAL(clicked()),this,SLOT(OnbtnSignIn()));
	connect(ui.btnPasswd,SIGNAL(clicked()),this,SLOT(OnbtnPasswd()));
	connect(ui.btnRegister,SIGNAL(clicked()),this,SLOT(OnbtnRegister()));
	connect(ui.leditPasswd,SIGNAL(returnPressed()),this,SLOT(OnbtnSignIn()));
}

Test5_5A::~Test5_5A()
{

}


int Test5_5A::OnbtnClose()
{
    this->close();
	return 0;
}

int Test5_5A::OnbtnSignIn()
{
	QString username=ui.leditUser->text();
    QString userpasswd=ui.leditPasswd->text();
	if (username==""||userpasswd=="")
	{
		QMessageBox::information(this,"NO",GBK::ToQString("请输入用户名或密码"));
	}
    else if (username==UserName&&userpasswd==UserPasswd)
    {
		QMessageBox::information(this,"YES","Login Successful");
    } 
    else
    {
        QMessageBox::information(this,"ERROR","Login Failed");
        ui.leditPasswd->clear();
    }
	return 0;
}

int Test5_5A::OnbtnPasswd()
{
	QMessageBox::information(this,"haha","None of my business");
	return 0;
}

int Test5_5A::OnbtnRegister()
{
    LoginDlg Dlg(this);
	int ret=Dlg.exec();
	if (ret)
	{
		UserName=Dlg.name;
		UserPasswd=Dlg.passwd;
	} 
	else
	{

	}
	return 0;
}