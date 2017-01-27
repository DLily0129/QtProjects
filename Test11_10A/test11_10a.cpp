#include "test11_10a.h"
#include <QTimer>
//#include <QApplication>
#include <QDesktopWidget>
#include <QFileDialog>
#include "GBK.h"
#include <QCloseEvent>
#include <QMessageBox>

Test11_10A::Test11_10A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	isshooted=false;
	maybeSaved=true;
	connect(ui.actionScreenshot,SIGNAL(triggered()),this,SLOT(OnActionScreenshot()));
	connect(ui.actionSave,SIGNAL(triggered()),this,SLOT(OnActionSave()));
	ui.statusBar->showMessage(GBK::ToQString("°´¡°Esc¡±È¡Ïû½ØÍ¼"));
}

Test11_10A::~Test11_10A()
{

}

int Test11_10A::OnActionScreenshot()
{
    this->hide();
	QTimer::singleShot(300,this,SLOT(AfterSignalShot()));
	return 0;
}

int Test11_10A::AfterSignalShot()
{
	QPixmap screen=QPixmap::grabWindow(QApplication::desktop()->winId());//??desktop()->winId()??
	ScreenShot shot(screen);
	if (QDialog::Accepted==shot.exec())
	{
		shotpixmap=screen.copy(shot.m_screenshotRect);
		isshooted=true;
        maybeSaved=false;
		this->showNormal();
		ui.statusBar->clearMessage();
		update();
	}
	else
	{
		this->showNormal();
	}
	
	return 0;
}

void Test11_10A::paintEvent(QPaintEvent *event)
{
    QPainter paint(this);
	QRect target(40,40,520,320);
	if (isshooted==true)
    {
      paint.drawPixmap(target,shotpixmap);
    }
}

int Test11_10A::OnActionSave()
{
	if (shotpixmap.isNull())
	{
		return 0;
	}
	QString filename=QFileDialog::getSaveFileName(this,"Save Picture","","Image File(*.jpg)");
	if (filename.length()>0)
	{
		shotpixmap.save(filename);
		maybeSaved=true;
	}
	return 0;
}

void Test11_10A::closeEvent(QCloseEvent *event)
{
    if (maybeSaved==true)
    {
		event->accept();
    } 
    else
    {
		event->ignore();

		int button
			= QMessageBox::warning(this,
			tr("Unsaved changes"),
			tr("Would you like to save this picture?"),
			QMessageBox::Yes, QMessageBox::No);

		if (button == QMessageBox::Yes)
			OnActionSave();
		else
		{	
           shotpixmap=NULL;
		   isshooted=false;
		   update();
		   maybeSaved=true;
		}
    }
}


