#ifndef TEST10_2A_H
#define TEST10_2A_H

#include <QtGui/QMainWindow>
#include "ui_test10_2a.h"
#include "GBK.h"

class Test10_2A : public QMainWindow
{
	Q_OBJECT

public:
	Test10_2A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test10_2A();

private:
	Ui::Test10_2AClass ui;

private slots:
	int OnActionNew();
	int OnActionOpen();
	int OnActionSave();
	int TextChanged();

private:
	QString m_filepath;
};

#endif // TEST10_2A_H
