/************************************************************************
* 实现ListWidget原位编辑  
* 及右键菜单                      
*************************************************************************/

#ifndef TEST12_2A_H
#define TEST12_2A_H

#include <QtGui/QMainWindow>
#include "ui_test12_2a.h"
#include "MyDelegata.h"

class Test12_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test12_2A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test12_2A();

private:
	Ui::Test12_2AClass ui;

	int AddItem(QString name);
	int row;
	QListWidgetItem *item;

private slots:
	int ContextMenuRequested(const QPoint &pos);
	int OnActionDel();
};

#endif // TEST12_2A_H
