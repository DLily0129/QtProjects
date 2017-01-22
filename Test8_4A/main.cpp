#include "test8_4a.h"
#include <QtGui/QApplication>
#include <vector>
using std::vector;

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	vector<char*> data;
	data.push_back("18800205316");
	data.push_back("13871448361");
	data.push_back("13554064024");
	data.push_back("13971437975");

	Test8_4A w(data);
	w.show();
	return a.exec();
}
