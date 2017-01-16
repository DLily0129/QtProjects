#include "demo004.h"
#include <QtGui/QApplication>
#include "AfCd.h"
#include "DlgSelect.h"

int main(int argc, char *argv[])
{
	AfCd::cd();

 	QApplication a(argc, argv);

	Demo004 w;
	w.show();

// 	QStringList numbers;
// 	numbers.push_back("13823400111");
// 	numbers.push_back("13900324116");
// 	numbers.push_back("14006221455");
// 	numbers.push_back("14108768991");
// 	numbers.push_back("14209779092");
// 	numbers.push_back("14377678970");
// 	numbers.push_back("15809876890");
// 	numbers.push_back("13903498722");
// 	numbers.push_back("14283793222");
// 	numbers.push_back("14109889072");
// 	numbers.push_back("14207627829");
// 	numbers.push_back("14309889248");
// 
// 	DlgSelect dlg(&numbers);
// 	dlg.show();

	return a.exec();
}
