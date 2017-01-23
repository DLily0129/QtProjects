#include "test9_1a.h"
#include <QFileDialog>
#include <QDebug>
//#include <QLineEdit>

Test9_1A::Test9_1A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.btnNew,SIGNAL(clicked()),this,SLOT(OnbtnNew()));
    connect(ui.btnSave,SIGNAL(clicked()),this,SLOT(OnbtnSave()));
	connect(ui.btnOpen,SIGNAL(clicked()),this,SLOT(OnbtnOpen()));
	connect(ui.btnCloseCurrent,SIGNAL(clicked()),this,SLOT(OnbtnCloseCurrent()));

	connect(ui.actionNew,SIGNAL(triggered()),this,SLOT(OnbtnNew()));
	connect(ui.actionSave,SIGNAL(triggered()),this,SLOT(OnbtnSave()));
	connect(ui.actionOpen,SIGNAL(triggered()),this,SLOT(OnbtnOpen()));
	connect(ui.actionClose,SIGNAL(triggered()),this,SLOT(OnbtnCloseCurrent()));

	m_index=0;

	//QLineEdit *ledit=new QLineEdit;
	//ledit->setMaximumWidth(100);
	//ui.mainToolBar->insertWidget(ui.actionNew,ledit);
}

Test9_1A::~Test9_1A()
{

}

int Test9_1A::OnbtnNew()
{
    m_plaintxedit=new QPlainTextEdit;
	m_plaintxedit->clear();
	ui.tabWidget->addTab(m_plaintxedit,QString(GBK::ToQString("未命名-%1")).arg(++m_index));
    ui.tabWidget->setCurrentWidget(m_plaintxedit);
	return 0;
}

int Test9_1A::OnbtnSave()
{
    QString filepath=QFileDialog::getSaveFileName(this,GBK::ToQString("保存"));

	if (filepath.length()>0)
	{
		string filename=GBK::FromQString(filepath);
		FILE *fp=fopen(filename.c_str(),"wb");

        QString text=m_plaintxedit->toPlainText();
		string gbk_text=GBK::FromQString(text);
		fwrite(gbk_text.c_str(),1,gbk_text.length(),fp);
		fclose(fp);
		
		ui.tabWidget->setTabText(ui.tabWidget->currentIndex(),filepath);
	}
	
	return 0;
}

int Test9_1A::OnbtnOpen()
{
	QString filepath=QFileDialog::getOpenFileName(this,GBK::ToQString("打开"));

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
			QPlainTextEdit *opentext=new QPlainTextEdit;
			opentext->setPlainText(GBK::ToQString(buf));
			ui.tabWidget->addTab(opentext,filepath);
			ui.tabWidget->setCurrentWidget(opentext);
           
		}
		delete[] buf;
		fclose(fp);
	}
	return 0;
}

int Test9_1A::OnbtnCloseCurrent()
{
    int i=ui.tabWidget->currentIndex();
	if (i>=0)
	{
        ui.tabWidget->removeTab(i);
	}
	return 0;
}
