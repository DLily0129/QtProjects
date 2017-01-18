#ifndef TEST5_5A_H
#define TEST5_5A_H

#include <QtGui/QMainWindow>
#include "ui_test5_5a.h"

class Test5_5A : public QMainWindow
{
	Q_OBJECT

public:
	Test5_5A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test5_5A();

private slots:
	int OnbtnClose();

private slots:
	int OnbtnSignIn();

private slots:
	int OnbtnPasswd();

private slots:
	int OnbtnRegister();


private:
	Ui::Test5_5AClass ui;

private:
	QString UserName;
	QString UserPasswd;
};

#endif // TEST5_5A_H
