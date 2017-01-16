#include "test5_1b.h"
#include <QMessageBox>

Test5_1B::Test5_1B(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.btnNext,SIGNAL(clicked(bool)),SLOT(OnClickedBtn(bool)));
}

Test5_1B::~Test5_1B()
{

}

int Test5_1B::OnClickedBtn(bool checked)
{
   if (ui.ChkBxAgreed->isChecked())
   {
	   this->close();
   } 
   else
   {
	   //KidWin *Win2=new KidWin;
	  // Win2->show();
	   QMessageBox::information(this,"Error","You have not agreed yet");
   }
   return 0;
}