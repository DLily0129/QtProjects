#ifndef TEST12_1A_H
#define TEST12_1A_H

#include <QtGui/QMainWindow>
#include "ui_test12_1a.h"
#include "AddInDlg.h"
#include "ChooseDlg.h"
#include "ChangeDlg.h"
using std::vector;
using std::string;

class Test12_1A : public QMainWindow
{
	Q_OBJECT

public:
	Test12_1A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test12_1A();

private:
	Ui::Test12_1AClass ui;

	AddInDlg *m_add;
	vector<string> m_nums;
	QString PhoneNum;
	int m_Size;
	ChooseDlg *m_choose;
	int row;
	ChangeDlg *m_change;

private slots:
	int OnbtnAddIn();
	int OnbtnAdd();
	int OnbtnChange();
	int OnbtnStartIn();
	int OnbtnChangeOk();
};

#endif // TEST12_1A_H
