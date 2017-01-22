#include "test8_4a.h"

Test8_4A::Test8_4A(const vector<char*> data,QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	PhoneNums=data;
    size=PhoneNums.size();

	ui.label->setText(PhoneNums[0]);
	n=1;

	connect(ui.btnStrat,SIGNAL(toggled(bool)),this,SLOT(OnbtnStrat(bool)));
	
}

Test8_4A::~Test8_4A()
{

}

int Test8_4A::OnbtnStrat(bool)
{
    if (ui.btnStrat->isChecked())
    {
       timerid=startTimer(100);
    } 
    else
    {
		killTimer(timerid);
		if (n==0)
		{
			choose=size-1;
		} 
		else
		{
            choose=n-1;
		}
		
		ui.txeditShowChosen->append(PhoneNums[choose]);
    }
	return 0;
}

void Test8_4A::timerEvent(QTimerEvent *event)
{
       ui.label->setText(PhoneNums[n]);
	   if (n==size-1)
	   {
		   n=0;
	   } 
	   else
	   {
		   n+=1;
	   }

}