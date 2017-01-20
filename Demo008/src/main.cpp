#include "demo008.h"
#include <QtGui/QApplication>
#include "../afos/AfCd.h"

int main(int argc, char *argv[])
{
	// 设置当前目录为exe所在目录
	AfCd::cd();

	QApplication a(argc, argv);
	Demo008 w;
	w.show();
	return a.exec();
}
