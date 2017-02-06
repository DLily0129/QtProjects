#ifndef MYDELEGATA_H
#define MYDELEGATA_H

#include <QStyledItemDelegate>

class MyDelegata : public QStyledItemDelegate
{
	Q_OBJECT

public:
	MyDelegata(QObject *parent);
	~MyDelegata();

private:
	QWidget *createEditor (QWidget *parent, const QStyleOptionViewItem &option,
		const QModelIndex &index) const;
	
	void updateEditorGeometry (QWidget *editor, const QStyleOptionViewItem &option,
		 const QModelIndex &index) const;
	
	void setEditorData (QWidget *editor, const QModelIndex &index) const;

	void setModelData (QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const;

};

#endif // MYDELEGATA_H
