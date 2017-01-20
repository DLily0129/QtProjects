#ifndef TEST7_3A_H
#define TEST7_3A_H

#include <QtGui/QMainWindow>
#include "ui_test7_3a.h"

class Test7_3A : public QMainWindow
{
	Q_OBJECT

public:
	Test7_3A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test7_3A();

private:
	Ui::Test7_3AClass ui;
};

#endif // TEST7_3A_H
