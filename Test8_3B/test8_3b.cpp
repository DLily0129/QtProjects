#include "test8_3b.h"
#include <QFileDialog>
#include "GBK.h"
#include <QMessageBox>

Test8_3B::Test8_3B(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.btnSelect,SIGNAL(clicked()),this,SLOT(OnbtnSelect()));
	connect(ui.btnSend,SIGNAL(clicked()),this,SLOT(OnbtnSend()));
}

Test8_3B::~Test8_3B()
{

}

int Test8_3B::OnbtnSelect()
{
	m_filepath=QFileDialog::getOpenFileName(this,GBK::ToQString("选择文件"));

	if(m_filepath.length()>0)
	{
		ui.lineEdit->setText(m_filepath);
	}
	return 0;
}

int Test8_3B::OnbtnSend()
{
    if (m_filepath>0)
    {
       m_send=new SendDlg(m_filepath);
	   m_send->exec();
    } 
    else
    {
		QMessageBox::information(this,"Failed",GBK::ToQString("请选择一个文件"));
    }
	return 0;
}
