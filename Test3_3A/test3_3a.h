#ifndef TEST3_3A_H
#define TEST3_3A_H

#include <QtGui/QMainWindow>
#include "ui_test3_3a.h"

class Test3_3A : public QMainWindow
{
	Q_OBJECT

public:
	Test3_3A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test3_3A();

private:
	Ui::Test3_3AClass ui;
};

#endif // TEST3_3A_H
