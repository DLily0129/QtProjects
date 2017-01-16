#include "test4_1a.h"

Test4_1A::Test4_1A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

	connect(
		ui.btnshow,
		SIGNAL(clicked(bool)),
		this,
        SLOT(OnShowIfClicked(bool))
		);
}

Test4_1A::~Test4_1A()
{

}

int Test4_1A::OnShowIfClicked(bool checked)
{
   ui.plainTextEdit->setPlainText("Hello World!");
   return 0;
}