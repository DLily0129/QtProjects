#include "test11_2a.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	Test11_2A w;
	w.show();

// 	Rectangle rect(NULL);
// 	rect.resize(200,200);
// 	rect.move(300,0);
// 	rect.show();

	return a.exec();
}
