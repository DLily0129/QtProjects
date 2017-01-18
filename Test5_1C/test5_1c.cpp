#include "test5_1c.h"

Test5_1C::Test5_1C(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.cbxAgreed,SIGNAL(stateChanged(int)),
		this,SLOT(OnClickedcbxAgreed()));
}

Test5_1C::~Test5_1C()
{

}

int Test5_1C::OnClickedcbxAgreed()
{
    if (ui.cbxAgreed->isChecked())
    {
		ui.btnNext->setEnabled(true);
    } 
    else
    {
       ui.btnNext->setEnabled(false);
    }
	return 0;
}