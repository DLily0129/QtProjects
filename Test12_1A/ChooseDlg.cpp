#include "ChooseDlg.h"
#include <QDebug>

ChooseDlg::ChooseDlg(const vector<string> data,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	Nums=data;
	m_size=data.size();

	//Nums.resize(m_size);
	ui.label->setText(GBK::ToQString(Nums[0]));
	n=1;

    connect(ui.btnStart,SIGNAL(toggled(bool)),this,SLOT(OnbtnStart(bool)));
}

ChooseDlg::~ChooseDlg()
{

}

int ChooseDlg::OnbtnStart(bool)
{
	if (ui.btnStart->isChecked())
	{
	
		timerid=startTimer(100);
	} 
	else
	{
		killTimer(timerid);
		if (n==0)
		{
			choose=m_size-1;
		} 
		else
		{
			choose=n-1;
		}
        ui.plainTextEdit->appendPlainText(GBK::ToQString(Nums[choose]));
	}
	
	return 0;
}

void ChooseDlg::timerEvent(QTimerEvent *event)
{
	ui.label->setText(GBK::ToQString(Nums[n]));
	if (n==m_size-1)
	{
		n=0;
	} 
	else
	{
		n+=1;
	}
	
	
}
