#ifndef DEMO008_H
#define DEMO008_H

#include <QtGui/QMainWindow>
#include "ui_demo008.h"

class Demo008 : public QMainWindow
{
	Q_OBJECT

public:
	Demo008(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Demo008();

private slots:
	int onCapture();
	int onSave();
	int onDelayedCapture();

private:
	Ui::Demo008Class ui;

};

#endif // DEMO008_H
