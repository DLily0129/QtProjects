#include "test10_2a.h"
#include <QFileDialog>

Test10_2A::Test10_2A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

    m_filepath="";
	connect(ui.actionNew,SIGNAL(triggered()),this,SLOT(OnActionNew()));
	connect(ui.actionOpen,SIGNAL(triggered()),this,SLOT(OnActionOpen()));  
	connect(ui.actionSave,SIGNAL(triggered()),this,SLOT(OnActionSave()));

}

Test10_2A::~Test10_2A()
{

}

int Test10_2A::OnActionNew()
{
    m_filepath="";
	ui.plainTextEdit->clear();
	connect(ui.plainTextEdit,SIGNAL(textChanged()),this,SLOT(TextChanged()));
	ui.statusBar->showMessage("untitled");
	return 0;
}

int Test10_2A::OnActionOpen()
{
	ui.actionSave->setEnabled(false);
	QString filepath=QFileDialog::getOpenFileName(this,GBK::ToQString("´ò¿ª"));

	if (filepath.length()>0)
	{
		string filename=GBK::FromQString(filepath);
		FILE *fp=fopen(filename.c_str(),"rb");

		fseek(fp,0,SEEK_END);
		int filesize=ftell(fp);
		fseek(fp,0,SEEK_SET);

		char *buf=new char[filesize+1];
		int n=fread(buf,1,filesize,fp);
		if (n>0)
		{
			buf[n]=0;
			ui.plainTextEdit->setPlainText(GBK::ToQString(buf));

		}
		delete[] buf;
		fclose(fp);
	}
	m_filepath=filepath;
	
	ui.statusBar->showMessage(m_filepath);
	
	connect(ui.plainTextEdit,SIGNAL(textChanged()),this,SLOT(TextChanged()));
	return 0;
}

int Test10_2A::OnActionSave()
{
    if (m_filepath=="")
    {
		QString filepath=QFileDialog::getSaveFileName(this,GBK::ToQString("±£´æ"));
		if (filepath=="")
		{
			return -1;
		}
		m_filepath=filepath;
    }
	string filename=GBK::FromQString(m_filepath);
	FILE *fp=fopen(filename.c_str(),"wb");

	QString text=ui.plainTextEdit->toPlainText();
	string gbk_text=GBK::FromQString(text);
	fwrite(gbk_text.c_str(),1,gbk_text.length(),fp);
	fclose(fp);

    ui.statusBar->showMessage(m_filepath);
	return 0;
}

int Test10_2A::TextChanged()
{
    ui.actionSave->setEnabled(true);
	return 0;
}
