#include "TaskThread.h"
//#include <QDebug>


TaskThread::TaskThread(QObject *parent)
	: QThread(parent)
{
    m_filesize=0;
	m_readsize=0;
}

TaskThread::~TaskThread()
{

}

int TaskThread::BeginTask(const QString filepath)
{
	m_filename=GBK::FromQString(filepath);
	start();
	return 0;
}

void TaskThread::run()
{
	FILE *fp=fopen(m_filename.c_str(),"rb");

	fseek(fp,0,SEEK_END);
	m_filesize=ftell(fp);
	fseek(fp,0,SEEK_SET);

    char buf[1024];
	while(m_readsize<m_filesize)
	{
	   int n=fread(buf,1,1024,fp);
	   m_readsize+=n;
	   //qDebug() <<"Read: "<<m_readsize;
	   QThread::msleep(10);
    }
    fclose(fp);
}

int TaskThread::GetProgress( )
{
	return m_readsize*100/m_filesize;
}