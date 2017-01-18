#include "test5_4a.h"
#include <QMessageBox>

Test5_4A::Test5_4A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.tbtnHelp,SIGNAL(clicked()),this,SLOT(OnbtnHelp()));
	connect(ui.tbtnTool,SIGNAL(toggled(bool)),this,SLOT(OnbtnTool(bool)));
}

Test5_4A::~Test5_4A()
{

}

int Test5_4A::OnbtnHelp()
{
	QMessageBox::information(this,"Hint","No Help!");
	return 0;
}

int Test5_4A::OnbtnTool(bool checked)
{
    if (checked==true)
    {
		QMessageBox::information(this,"Hint","No Tools");
    } 
    else
    {
    }
	return 0;
}