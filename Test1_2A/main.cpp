#include <QtGui/QLabel>
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	QLabel label("Hello World\n");
	label.show();
	return a.exec();
}
