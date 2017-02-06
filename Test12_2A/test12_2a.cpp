#include "test12_2a.h"
#include <QMenu>

Test12_2A::Test12_2A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	AddItem("c++");
	AddItem("java");
	AddItem("python");

	ui.listWidget->setItemDelegate(new MyDelegata(ui.listWidget));

	ui.listWidget->setContextMenuPolicy(Qt::CustomContextMenu);
	connect(ui.listWidget,SIGNAL(customContextMenuRequested(const QPoint &)),
		this,SLOT(ContextMenuRequested(const QPoint &)));

	connect(ui.actionDel,SIGNAL(triggered()),this,SLOT(OnActionDel()));
}

Test12_2A::~Test12_2A()
{

}

int Test12_2A::AddItem(QString name)
{
    QListWidgetItem *item=new QListWidgetItem;
	item->setData(Qt::DisplayRole,name);
	item->setFlags(Qt::ItemIsEnabled|Qt::ItemIsEditable);
	ui.listWidget->addItem(item);
	return 0;
}

int Test12_2A::ContextMenuRequested(const QPoint &pos)
{
    row=ui.listWidget->currentRow();
	item=ui.listWidget->itemAt(pos);
    if (item)
    {
		QMenu menu;
		menu.addAction(ui.actionDel); 
		menu.exec(ui.listWidget->mapToGlobal(pos));
    }
	
	return 0;
}

int  Test12_2A::OnActionDel()
{
    QListWidgetItem *takeitem=ui.listWidget->takeItem(row);
    if (takeitem)
    {
       delete takeitem;
    }
	return 0;
}
