#include "demo004.h"
#include "DlgSelect.h"


Demo004::Demo004(QWidget *parent, Qt::WFlags flags)
	: QWidget(parent, flags)
{
	ui.setupUi(this);

	// ���غ����б�
	m_source.load();
	for(int i=0; i<m_source.numbers.size(); i++)
	{
		string& number = m_source.numbers[i];
		
		// ��ʾ���б�ؼ�
		QListWidgetItem* item = new QListWidgetItem();
		item->setText(number.c_str());
		ui.m_lstNumbers->addItem(item);
	}

	// �¼�
	connect(ui.m_btnEnter, SIGNAL(clicked()), this, SLOT(onEnter()));
}

Demo004::~Demo004()
{

}

int Demo004::onEnter()
{
	QStringList numbers;
	for(int i=0; i<m_source.numbers.size(); i++)
	{
		string& value = m_source.numbers[i];
		numbers.append(value.c_str());
	}

	// ����������
	// this->hide(); //

	// ����齱����
	DlgSelect dlg(&numbers, this);
	dlg.exec();

	// �ָ���ʾ������
	//this->showNormal();
	//this->activateWindow();
	return 0;
}
