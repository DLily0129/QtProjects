#ifndef TEST4_1A_H
#define TEST4_1A_H

#include <QtGui/QMainWindow>
#include "ui_test4_1a.h"

class Test4_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test4_1A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test4_1A();

public slots:
    int OnShowIfClicked(bool checked);

private:
	Ui::Test4_1AClass ui;
};

#endif // TEST4_1A_H
