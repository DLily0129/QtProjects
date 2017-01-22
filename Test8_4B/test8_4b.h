/********************************************************************************
** Created: Sun Aug 14, 11:46, 2016
**      by:Lily D
** 
** û��ʵ�ָ��ĺ����plaintextedit�ĸ��ģ���֮��Ĺ����齱����ʵ���˸���
** (Sun Aug 28,Test12_1Aʵ���˺�����ģ���plaintextedit��Ϊlistwidget��
** 
** û��ʵ�ֳ��һ�������ɾ��������룬���䲻�ٵڶ��γ���
********************************************************************************/

#ifndef TEST8_4B_H
#define TEST8_4B_H

#include <QtGui/QMainWindow>
#include "ui_test8_4b.h"
#include "GBK.h"
#include "AddInDlg.h"
#include "ChooseDlg.h"
#include "ChangeDlg.h"
#include <vector>
using std::vector;

class Test8_4B : public QMainWindow
{
	Q_OBJECT

public:
	Test8_4B(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test8_4B();

private:
	Ui::Test8_4BClass ui;

    vector<string> m_nums;
	int m_Size;
	AddInDlg *m_add;
	QString PhoneNum;
	QString AddNum;
	ChooseDlg *m_choose;
	ChangeDlg *m_change;
	int changeid;

private slots:
	int OnbtnStartIn();
	int OnbtnAddIn();
	int OnbtnAdd();
	int OnbtnChange();
	int OnbtnOK();
};

#endif // TEST8_4B_H
