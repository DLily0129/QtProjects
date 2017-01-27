#ifndef TEST11_10A_H
#define TEST11_10A_H

#include <QtGui/QMainWindow>
#include "ui_test11_10a.h"
#include "ScreenShot.h"

class Test11_10A : public QMainWindow
{
	Q_OBJECT

public:
	Test11_10A(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Test11_10A();

private:
	Ui::Test11_10AClass ui;

	bool isshooted;
	bool maybeSaved;
	QPixmap shotpixmap;

	void paintEvent(QPaintEvent *event);
	void closeEvent(QCloseEvent *event);


private slots:
	int OnActionScreenshot();
	int AfterSignalShot();
	int OnActionSave();

};

#endif // TEST11_10A_H
