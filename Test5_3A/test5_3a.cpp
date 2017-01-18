#include "test5_3a.h"
#include "GBK.h"

Test5_3A::Test5_3A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.btnOK,SIGNAL(clicked()),this,SLOT(OnbtnOK()));
	connect(ui.cbxFamilyMember,SIGNAL(currentIndexChanged(int)),this,SLOT(OnCbxChanged(int)));
    connect(ui.btnClose,SIGNAL(clicked()),this,SLOT(OnbtnClosed()));
}

Test5_3A::~Test5_3A()
{

}

int Test5_3A::OnbtnOK()
{
    int index=ui.cbxFamilyMember->currentIndex();
	if (index==0)
	{
		ui.leditBirth->setText(GBK::ToQString("1958��05��27��"));
	}
	if (index==1)
	{
		ui.leditBirth->setText(GBK::ToQString("1960��07��30��"));
	}
	if (index==2)
	{
		ui.leditBirth->setText(GBK::ToQString("1994��01��17��"));
	}
	if (index==3)
	{
		ui.leditBirth->setText(GBK::ToQString("1997��01��29��"));
	}
	return 0;
}

int Test5_3A::OnCbxChanged(int index)
{
	if (ui.leditBirth->text()=="")
	{

	}
	else{
	   if (index==0)
	  {
		  ui.leditBirth->setText(GBK::ToQString("1958��05��27��"));
	  }
	  if (index==1)
	  {
		  ui.leditBirth->setText(GBK::ToQString("1960��07��30��"));
	  }
	  if (index==2)
	  {
		  ui.leditBirth->setText(GBK::ToQString("1994��01��17��"));
	  }
	  if (index==3)
	  {
		  ui.leditBirth->setText(GBK::ToQString("1997��01��29��"));
	  }
	}
	return 0;
}

int Test5_3A::OnbtnClosed()
{
    this->close();
	return 0;
}

