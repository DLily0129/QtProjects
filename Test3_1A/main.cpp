#include "MYwin.h"
#include <QtGui/QApplication>
#include <QtGui/QWidget>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MYwin w(NULL);
	w.resize(400,300);
	w.move(100,100);
	w.show();
	return a.exec();
}
