#include "test12_1a.h"
#include "GBK.h"
#include <QMessageBox>

Test12_1A::Test12_1A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	
	connect(ui.btnAddIn,SIGNAL(clicked()),this,SLOT(OnbtnAddIn()));
	connect(ui.btnChange,SIGNAL(clicked()),this,SLOT(OnbtnChange()));
	connect(ui.btnStartIn,SIGNAL(clicked()),this,SLOT(OnbtnStartIn()));

	m_add=new AddInDlg;
	connect(m_add->ui.btnAdd,SIGNAL(clicked()),this,SLOT(OnbtnAdd()));
	
	m_change=new ChangeDlg;
	connect(m_change->ui.btnChangeOk,SIGNAL(clicked()),this,SLOT(OnbtnChangeOk()));

	m_nums.clear();
	m_Size=m_nums.size();
}

Test12_1A::~Test12_1A()
{

}

int Test12_1A::OnbtnAddIn()
{
	m_add->ui.leditAdd->clear();
	m_add->ui.leditAdd->setFocus();
	m_add->exec();
	return 0;
}

int Test12_1A::OnbtnAdd()
{
	PhoneNum=m_add->ui.leditAdd->text();

	m_nums.push_back(GBK::FromQString(PhoneNum));
	ui.listWidget->addItem(PhoneNum);
    m_Size++;
	m_add->accept();
	return 0;
}

int Test12_1A::OnbtnChange()
{
	if (m_Size==0)
	{
		QMessageBox::information(this,"Failed",GBK::ToQString("ÇëÊäÈëºÅÂë"));
	} 
	row=ui.listWidget->currentRow();
	if (row<0)
	{
        QMessageBox::information(this,"Failed",GBK::ToQString("ÇëÑ¡ÖÐÒ»¸öºÅÂë"));
	} 
	else
	{
		m_change->ui.lineEdit->clear();
        m_change->ui.lineEdit->setFocus();
		m_change->exec();  
	}
	return 0;
}

int Test12_1A::OnbtnStartIn()
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

int Test12_1A::OnbtnChangeOk()
{
    QString ChangeNum=m_change->ui.lineEdit->text();
	m_nums[row]=GBK::FromQString(ChangeNum);

	QListWidgetItem *takeitem=ui.listWidget->takeItem(row);
	takeitem->setText(ChangeNum);
	ui.listWidget->insertItem(row,takeitem);
	m_change->accept();
	return 0;
}