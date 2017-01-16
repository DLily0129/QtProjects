#include <QtGui>

#include "DlgSelect.h"
#include "GBK.h"

DlgSelect::DlgSelect(QStringList* nubmers,QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	m_nubmers = nubmers;
	m_working = false;
	m_iconStart = QIcon(":/Demo004/Resources/play.png");
	m_iconStop = QIcon(":/Demo004/Resources/stop.png");

	// ��ʼ����ʶλ
	m_selected = 0;
	m_total = nubmers->length();
	m_flags = new int[m_total];
	for(int i=0; i<m_total; i++)
		m_flags[i] = 0;

	// �¼�
	connect(ui.m_btnStart, SIGNAL(clicked()), this, SLOT(onSelectNext()));
}

DlgSelect::~DlgSelect()
{
	delete [] m_flags;
}

void DlgSelect::timerEvent ( QTimerEvent * event )
{
	// ������һ��
	int next = m_now;
	while(1)
	{
		// ��ͷ
		next ++;
		if(next >= m_total) next = 0;
		
		// ȷ�����ظ�
		if( !m_flags[next])
			break;
	}
	m_now = next;

	// ��ʾ	
	ui.m_ctlDisplay->setText(m_nubmers->at(m_now));
}

int DlgSelect::onSelectNext()
{
	// ��������
	if(m_selected >= m_total) return 0;

	if(!m_working)
	{
		// �����齱
		m_now = 0;
		m_timerId = startTimer(100);
		ui.m_btnStart->setIcon(m_iconStop);
		m_working = true;
	}
	else
	{
		// ֹͣ
		killTimer(m_timerId);
		m_working = false;
		ui.m_btnStart->setIcon(m_iconStart);

		// 
		m_flags[m_now] = 1;
		QString number = m_nubmers->at(m_now);
		ui.m_lstResult->addItem(new QListWidgetItem(number));
	}
	return 0;
}

int DlgSelect::saveResults()
{
	// ��������浽�ļ�, append��ʽ
	FILE* fp = fopen("results.txt", "ab");
	if(!fp)
	{
		QMessageBox::critical(this, 
			GBK::ToUnicode("���ش���"), "�޷�������!");
		return -1;
	}
	
	fprintf(fp, "----------- result ---------\n");

	// �ӽ���б���ȡ��������Ŀ�����浽�ļ���
	for(int i=0; i<ui.m_lstResult->count(); i++)
	{
		QListWidgetItem* item = ui.m_lstResult->item(i);
		QString qValue = item->text();
		string number = GBK::FromUnicode(qValue);

		fprintf(fp, "%s\n", number.c_str());
	}
	fclose(fp);

	return 0;
}

// ���ڱ��ر�ʱ������
void DlgSelect::closeEvent ( QCloseEvent * event )
{
	// �������ʧ�ܣ��򲻹رմ˶Ի���
	if(saveResults() < 0)
	{
		event->ignore();
		return;
	}

	QDialog::closeEvent(event);
}
