#ifndef TEST5_1C_H
#define TEST5_1C_H

#include <QtGui/QMainWindow>
#include "ui_test5_1c.h"

class Test5_1C : public QMainWindow
{
	Q_OBJECT

public:
	Test5_1C(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test5_1C();

private slots:
	int OnClickedcbxAgreed();


private:
	Ui::Test5_1CClass ui;
};

#endif // TEST5_1C_H
