#include "test11_4a.h"
#include <QPainter>
#include "GBK.h"
//#include <QDebug>

Test11_4A::Test11_4A(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	
}

Test11_4A::~Test11_4A()
{

}

void Test11_4A::paintEvent(QPaintEvent *event)
{
     QPainter painter(this);
	 
	 int width=this->width();
	 int height=this->height();

	// QFont font("Times",16,QFont::Bold,true);
	 QFont font("Times",20,QFont::Normal);
     painter.setFont(font);
	  
	 //drawText (int x, int y, int width, int height, int flags, const QString & text, QRect * boundingRect = 0) 
	 painter.drawText(0,0,width,height,Qt::AlignHCenter|Qt::AlignTop,GBK::ToQString("段丽丽"));
	 
	 //drawText (const QRect & rectangle, int flags, const QString & text, QRect * boundingRect = 0)
	 QRect rect(30,30,200,100);
	 painter.drawRect(rect);
	 painter.drawText(rect,Qt::AlignCenter,GBK::ToQString("上海大学"));

	 //drawText (const QRectF & rectangle, const QString & text, const QTextOption & option = QTextOption())
	 QRect rectangle(0,150,width,height);
     QString longtext="This is an overloaded function.Draws the given text in the rectangle specified using the option to control its positioning and orientation.By default, QPainter draws text anti-aliased.";
     QTextOption option;
	 option.setWrapMode(QTextOption::WordWrap);
	 painter.drawText(rectangle,longtext,option);

	 //只能显示一行，显示不出来的打省略号，需要动态测量
	 QFontMetrics metrics(font);
	 QRect boundingRect=metrics.boundingRect(0,350,width,height,Qt::AlignLeft|Qt::AlignTop,longtext);
	 if (boundingRect.width()<width){
		
		 painter.drawText(boundingRect,Qt::AlignLeft|Qt::AlignTop,longtext);
	 } 
	 else{
		
		 for (int i=longtext.length()-1;i>=0;i--) {
			
			 QString substr=longtext.left(i);
			 QString showstr=substr+"...";
			 //qDebug()<<showstr;
			 QRect bounding=metrics.boundingRect(showstr);
			 if (bounding.width()<width){
				
				 painter.drawText(boundingRect,Qt::AlignLeft|Qt::AlignTop,showstr);
				 break;
			 }
		 }
	 }
		 		 
}
