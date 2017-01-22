#include "test8_4b.h"
#include <QMessageBox>
#include <QIntValidator>

Test8_4B::Test8_4B(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	m_nums.clear();
	m_Size=m_nums.size();

    connect(ui.btnStartIn,SIGNAL(clicked()),this,SLOT(OnbtnStartIn()));
	connect(ui.btnAddIn,SIGNAL(clicked()),this,SLOT(OnbtnAddIn()));
    connect(ui.btnChange,SIGNAL(clicked()),this,SLOT(OnbtnChange()));
	
	m_add=new AddInDlg;
	connect(m_add->ui.btnAdd,SIGNAL(clicked()),this,SLOT(OnbtnAdd()));
    
	m_change=new ChangeDlg;
	connect(m_change->ui.btnOK,SIGNAL(clicked()),this,SLOT(OnbtnOK()));
	
}

Test8_4B::~Test8_4B()
{

}

int Test8_4B::OnbtnStartIn()
{
	if (m_Size==0)
	{
		QMessageBox::information(this,"Failed",GBK::ToQString("ÇëÊäÈëºÅÂë"));
	} 
	else
	{
       m_choose=new ChooseDlg(m_nums);
	   m_choose->exec();
	}
	return 0;
}

int Test8_4B::OnbtnAddIn()
{
    m_add->ui.leditAdd->clear();
	m_add->exec();
	return 0;
}

int Test8_4B::OnbtnAdd()
{
    PhoneNum=m_add->ui.leditAdd->text();

	m_nums.push_back(GBK::FromQString(PhoneNum));
	ui.plainTextEdit->appendPlainText(QString("%1. %2").arg(++m_Size).arg(PhoneNum));
	
	m_add->accept();
	return 0;
}

int Test8_4B::OnbtnChange()
{
    if (m_Size==0)
    {
        QMessageBox::information(this,"Failed",GBK::ToQString("ÇëÊäÈëºÅÂë"));
    } 
    else
    {
		m_change->ui.leditNum->setValidator(new QIntValidator(1,m_Size,this));
		m_change->exec();
    }
	return 0;
}

int Test8_4B::OnbtnOK()
{
	QString num=m_change->ui.leditNum->text();
	changeid=num.toInt();

	QString changenum=m_change->ui.leditPhoneNum->text();
	m_nums[changeid-1]=GBK::FromQString(changenum);

	m_change->accept();

	return 0;
}
