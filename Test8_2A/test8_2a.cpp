#include "test8_2a.h"

//#include <WinSock2.h>
//#include <Windows.h>

Test8_2A::Test8_2A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	timeid=startTimer(1000);
}

Test8_2A::~Test8_2A()
{

}

void Test8_2A::timerEvent(QTimerEvent *event)
{
    if (event->timerId()==timeid)
    {
		QTime now=QTime::currentTime();
		QString nowtime=now.toString("hh:mm:ss");
		ui.plainTextEdit->setPlainText(nowtime);

		//::Sleep(3000);
    }
	
}
