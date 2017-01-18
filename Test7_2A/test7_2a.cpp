#include "test7_2a.h"
#include "GBK.h"
#include <QFileDialog>


Test7_2A::Test7_2A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.btnOpen,SIGNAL(clicked()),this,SLOT(OnbtnOpen()));
    connect(ui.btnSave,SIGNAL(clicked()),this,SLOT(OnbtnSave()));
}

Test7_2A::~Test7_2A()
{

}

int Test7_2A::OnbtnOpen()
{
	QString filepath=QFileDialog::getOpenFileName(this,GBK::ToQString("选择文件")); 

	if (filepath.length()>0)
	{
		string filename=GBK::FromQSring(filepath);
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
	return 0;
}

int Test7_2A::OnbtnSave()
{
	QString filepath=QFileDialog::getSaveFileName(this,GBK::ToQString("保存"));

	if (filepath.length()>0)
	{
		QString text=ui.plainTextEdit->toPlainText();
		string gbk_text=GBK::FromQSring(text);

		string filename=GBK::FromQSring(filepath);
		FILE *fp=fopen(filename.c_str(),"wb");
		fwrite(gbk_text.c_str(),1,gbk_text.length(),fp);
		fclose(fp);
	}
	return 0;
}