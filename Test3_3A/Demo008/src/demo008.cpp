#include <QFileDialog>

#include "demo008.h"
#include "AfRegionSelector.h"

Demo008::Demo008(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(ui.actionCapture, SIGNAL(triggered()),this, SLOT(onCapture()));
	connect(ui.actionSave, SIGNAL(triggered()),this, SLOT(onSave()));

}

Demo008::~Demo008()
{

}

int Demo008::onCapture()
{
	// 令本窗口隐藏
	this->hide();

	// 隐藏本窗口需要一定时间，故延时一段时间后才开始截图
	QTimer::singleShot(300, this, SLOT(onDelayedCapture()));

	return 0;
}

int Demo008::onDelayedCapture()
{
	QPixmap screen 	= QPixmap::grabWindow(QApplication::desktop()->winId());
	AfRegionSelector dlg(screen, this);
	if(QDialog::Accepted == dlg.exec())
	{
		QPixmap region = screen.copy(dlg.selectRegion);
		ui.frame->display(region);
	}

	this->showNormal();
	return 0;
}

int Demo008::onSave()
{
	QPixmap picture = ui.frame->pixmap();
	if(picture.isNull()) return 0;

	// 保存到目标文件
	QString filename = QFileDialog::getSaveFileName(this, 
		"Save Picture", "", "Image File(*.jpg)");	
	if(filename.length() > 0)
	{
		picture.save(filename);
	}
	return 0;
}
