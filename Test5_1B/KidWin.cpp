#include "KidWin.h"

KidWin::KidWin(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	connect(ui.pushButton,SIGNAL(clicked(bool)),this,SLOT(OnClickedBtnOK(bool)));
}

KidWin::~KidWin()
{

}

int KidWin::OnClickedBtnOK(bool checked)
{
    this->close();
	return 0;
}