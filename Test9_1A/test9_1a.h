/********************************************************************************
** Form Lily Duan
** Created: Sun Aug 14 21:06
** 
** bug��࣬���ǲ�֪����ô�ģ�Ӧ��һ��ѡ�����һ��plaintextedit,����ֻ��     
** һ��m_plaintxedit,���������⣬����ô�ģ�����list<plaintextedit>��������
** ֧��������ʰ�������vector<plaintextedit>���о�����ְ���
********************************************************************************/

#ifndef TEST9_1A_H
#define TEST9_1A_H

#include <QtGui/QMainWindow>
#include "ui_test9_1a.h"
#include <QPlainTextEdit>
#include "GBK.h"

class Test9_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test9_1A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test9_1A();

private:
	Ui::Test9_1AClass ui;

	int m_index;
	QPlainTextEdit *m_plaintxedit;


private slots:
	int OnbtnNew();
	int OnbtnSave();
	int OnbtnOpen();
	int OnbtnCloseCurrent();
};

#endif // TEST9_1A_H
