#include "DlgTxt.h"
#include <QFileDialog>
#include "GBK.h"

DlgTxt::DlgTxt(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	connect(ui.btnClose,SIGNAL(clicked()),this,SLOT(OnbtnClose()));
    connect(ui.btnOpen,SIGNAL(clicked()),this,SLOT(OnbtnOpen()));
	connect(ui.btnSave,SIGNAL(clicked()),this,SLOT(OnbtnSave()));
}
    
int DlgTxt::OnbtnClose()
{
    reject();
	return 0;
}

int DlgTxt::OnbtnOpen()
{
	QString filepath=QFileDialog::getOpenFileName(this,GBK::ToQString("选择文件")); 

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
	return 0;
}

int DlgTxt::OnbtnSave()
{
	QString filepath=QFileDialog::getSaveFileName(this,GBK::ToQString("保存"));

	if(filepath.length()>0)
	{
		string filename=GBK::FromQString(filepath);
		FILE *fp=fopen(filename.c_str(),"wb");
		
		QString text=ui.plainTextEdit->toPlainText();
		string  gbk_text=GBK::FromQString(text);
		fwrite(gbk_text.c_str(),1,gbk_text.length(),fp);
		fclose(fp);

	}
	return 0;
}

DlgTxt::~DlgTxt()
{

}