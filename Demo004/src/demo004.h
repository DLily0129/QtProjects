#ifndef DEMO004_H
#define DEMO004_H

#include <QtGui/QWidget>
#include "ui_demo004.h"
#include "Source.h"

class Demo004 : public QWidget
{
	Q_OBJECT

public:
	Demo004(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Demo004();

private slots:
	int onEnter();

private:
	Ui::Demo004Class ui;
	Source m_source;
};

#endif // DEMO004_H
