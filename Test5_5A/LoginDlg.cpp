#include "LoginDlg.h"
#include <QMessageBox>
#include "GBK.h"

LoginDlg::LoginDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.btnCancel,SIGNAL(clicked()),this,SLOT(OnbtnCancel()));
	connect(ui.btnRegiser_2,SIGNAL(clicked()),this,SLOT(OnbtnRegister_2()));
	connect(ui.DlglEditPasswdAgain,SIGNAL(returnPressed()),this,SLOT(OnbtnRegister_2()));
}

LoginDlg::~LoginDlg()
{

}


int LoginDlg::OnbtnCancel()
{
    reject();
	return 0;
}

int LoginDlg::OnbtnRegister_2()
{
    name=ui.DlglEditUser->text();
	passwd=ui.DlglEditPasswd->text();
	passwdagain=ui.DlglEditPasswdAgain->text();
	if ((name!="")&&(passwd!="")&&(passwdagain!="")&&(passwd==passwdagain))
	{
		QMessageBox::information(this,"Successful",GBK::ToQString("注册成功"));
		accept();
	} 
	else if(name=="")
	{
        QMessageBox::information(this,"Failed",GBK::ToQString("请输入用户名"));
	}
	else if(passwd==""||passwdagain=="")
	{
        QMessageBox::information(this,"Failed",GBK::ToQString("请输入密码"));
		ui.DlglEditPasswd->clear();
		ui.DlglEditPasswdAgain->clear();
	}
	else
	{
       QMessageBox::information(this,"Failed",GBK::ToQString("两次密码不匹配"));
	   ui.DlglEditPasswd->clear();
	   ui.DlglEditPasswdAgain->clear();
	}
	return 0;
}