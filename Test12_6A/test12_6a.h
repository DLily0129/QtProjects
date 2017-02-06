#ifndef TEST12_6A_H
#define TEST12_6A_H

#include <QtGui/QMainWindow>
#include "ui_test12_6a.h"

class Test12_6A : public QMainWindow
{
	Q_OBJECT

public:
	Test12_6A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test12_6A();

private:
	Ui::Test12_6AClass ui;

	QTreeWidgetItem* AddItem(const QString &name,int score,QTreeWidgetItem* parent);
};

#endif // TEST12_6A_H
