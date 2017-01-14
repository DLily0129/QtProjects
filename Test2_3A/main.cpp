#include "MyWindow.h"
#include <QtGui/QApplication>
#include<QtGui/QWidget>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MyWindow w(NULL);
	w.show();
	return a.exec();
}
