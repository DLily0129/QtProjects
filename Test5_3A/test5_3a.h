#ifndef TEST5_3A_H
#define TEST5_3A_H

#include <QtGui/QMainWindow>
#include "ui_test5_3a.h"

class Test5_3A : public QMainWindow
{
	Q_OBJECT

public:
	Test5_3A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test5_3A();

private slots:
	int OnbtnOK();

private slots:
    int OnCbxChanged(int index);

private slots:
    int OnbtnClosed();

private:
	Ui::Test5_3AClass ui;
};

#endif // TEST5_3A_H
