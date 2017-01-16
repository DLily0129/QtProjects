#include "test5_1a.h"

Test5_1A::Test5_1A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	connect(
		ui.pushButton,
		SIGNAL(clicked(bool)),
		this,
		SLOT(OnClickedButton(bool))
		);
}

Test5_1A::~Test5_1A()
{

}

int Test5_1A::OnClickedButton(bool checked)
{
   if (ui.checkBox->isChecked())
   {
	   this->close();
   } 
   else
   {

   }
   return 0;
}