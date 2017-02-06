#ifndef CHOOSEDLG_H
#define CHOOSEDLG_H

#include <QDialog>
#include "ui_ChooseDlg.h"
#include <vector>
#include <string>
#include <QTime>
#include <QTimerEvent>
#include "GBK.h"
using std::vector;
using std::string;

class ChooseDlg : public QDialog
{
	Q_OBJECT

public:
	ChooseDlg(const vector<string> data,QWidget *parent = 0);
	~ChooseDlg();

private:
	Ui::ChooseDlg ui;

	int timerid;
	int n;
	int m_size;
	int choose;
	vector<string> Nums;

	virtual void timerEvent(QTimerEvent *event);

private slots:
	int OnbtnStart(bool);
};

#endif // CHOOSEDLG_H
