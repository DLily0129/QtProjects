/********************************************************************************
** Form Lily Duan
** Created: Sun Aug 14 21:06
** 
** bug多多，但是不知道怎么改，应该一个选项卡创建一个plaintextedit,但我只有     
** 一个m_plaintxedit,所以有问题，但怎么改，创建list<plaintextedit>？但链表不
** 支持随机访问啊？创建vector<plaintextedit>？感觉很奇怪啊。
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
