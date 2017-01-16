#ifndef TEST5_1A_H
#define TEST5_1A_H

#include <QtGui/QMainWindow>
#include "ui_test5_1a.h"

class Test5_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test5_1A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test5_1A();

private slots:
	int OnClickedButton(bool checked);



private:
	Ui::Test5_1AClass ui;
};

#endif // TEST5_1A_H
