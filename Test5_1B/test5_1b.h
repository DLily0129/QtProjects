#ifndef TEST5_1B_H
#define TEST5_1B_H

#include <QtGui/QMainWindow>
#include "ui_test5_1b.h"
#include "KidWin.h"

class Test5_1B : public QMainWindow
{
	Q_OBJECT

public:
	Test5_1B(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test5_1B();

private slots:
    int OnClickedBtn(bool checked);

private:
	Ui::Test5_1BClass ui;
};

#endif // TEST5_1B_H
