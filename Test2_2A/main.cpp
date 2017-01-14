#include "MyWin.h"
#include <QtGui/QApplication>
#include <QtGui/QWidget>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QWidget w;
	w.setGeometry(100,100,400,300);
	w.show();
	return a.exec();
}
