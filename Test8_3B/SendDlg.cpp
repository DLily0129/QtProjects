#include "SendDlg.h"

SendDlg::SendDlg(const QString filepath,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.btnCancel,SIGNAL(clicked()),this,SLOT(OnbtnCancel()));
	
	m_task=new TaskThread(NULL);
	m_task->BeginTask(filepath);
	timerid=startTimer(1000);

}

SendDlg::~SendDlg()
{

}

int SendDlg::OnbtnCancel()
{
    reject();
	return 0;
}

void SendDlg::timerEvent(QTimerEvent *event)
{
	int n=m_task->GetProgress();
	ui.progressBar->setValue(n);
	if (n==100)
	{
		m_task->wait();
		delete m_task;

		killTimer(timerid);
		accept();
	}
}
