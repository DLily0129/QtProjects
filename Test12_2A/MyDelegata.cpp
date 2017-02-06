#include "MyDelegata.h"
#include <QLineEdit>

MyDelegata::MyDelegata(QObject *parent)
	: QStyledItemDelegate(parent)
{

}

MyDelegata::~MyDelegata()
{

}

QWidget* MyDelegata::createEditor (QWidget *parent, const QStyleOptionViewItem &option,
					   const QModelIndex &index) const
{
     QLineEdit* editor=new QLineEdit(parent);
	 return editor;
}

void MyDelegata::updateEditorGeometry (QWidget *editor, const QStyleOptionViewItem &option,
						   const QModelIndex &index) const
{
     editor->setGeometry(option.rect); 
}

void MyDelegata::setEditorData (QWidget *editor, const QModelIndex &index) const
{
	QString text=index.data(Qt::DisplayRole).toString();
	QLineEdit* ed=(QLineEdit*) editor;
	ed->setText(text); 
}

void MyDelegata::setModelData (QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const
{
    QLineEdit* lineEdit=(QLineEdit*) editor;
	QString value=lineEdit->text();
	model->setData(index,value,Qt::DisplayRole);
}
