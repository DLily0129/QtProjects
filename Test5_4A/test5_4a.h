#ifndef TEST5_4A_H
#define TEST5_4A_H

#include <QtGui/QMainWindow>
#include "ui_test5_4a.h"

class Test5_4A : public QMainWindow
{
	Q_OBJECT

public:
	Test5_4A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test5_4A();

private slots:
	int OnbtnHelp();

private slots:
	int OnbtnTool(bool);

private:
	Ui::Test5_4AClass ui;
};

#endif // TEST5_4A_H
