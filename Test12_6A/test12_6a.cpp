#include "test12_6a.h"
#include <QString>
#include <QTreeWidgetItem>

Test12_6A::Test12_6A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	ui.treeWidget->setColumnCount(2);
	QStringList labels;
	labels.append("name");
	labels.append("score");
	ui.treeWidget->setHeaderLabels(labels);

	AddItem("xiaofang",95,0);
	QTreeWidgetItem *item=AddItem("xiaoming",93,0);
	AddItem("xiaohong",100,item);

}

Test12_6A::~Test12_6A()
{

}

QTreeWidgetItem* Test12_6A::AddItem(const QString &name,int score,QTreeWidgetItem* parent)
{
    QTreeWidgetItem *item=new QTreeWidgetItem;
	item->setText(0,name);
	item->setText(1,QString::number(score));
	if (parent)
	{
		 parent->addChild(item);
	} 
	else
	{
         ui.treeWidget->addTopLevelItem(item);
	}
    return item;
}
