#ifndef TASKTHREAD_H
#define TASKTHREAD_H

#include <QThread>
#include <string.h>
#include "GBK.h"

class TaskThread : public QThread
{
	Q_OBJECT

public:
	TaskThread(QObject *parent);
	~TaskThread();

public:
	int BeginTask(const QString filepath);
	int GetProgress();

private:
	void run();

private:
	string m_filename;
	int m_filesize;
	int m_readsize;

	
};

#endif // TASKTHREAD_H
