#include "demo008.h"
#include <QtGui/QApplication>
#include "../afos/AfCd.h"

int main(int argc, char *argv[])
{
	// ���õ�ǰĿ¼Ϊexe����Ŀ¼
	AfCd::cd();

	QApplication a(argc, argv);
	Demo008 w;
	w.show();
	return a.exec();
}
