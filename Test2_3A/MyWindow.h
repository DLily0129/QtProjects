#ifndef MYWINDOW_H
#define MYWINDOW_H

#include <QWidget>
#include<QPushButton>

class MyWindow : public QWidget
{
	Q_OBJECT

public:
	MyWindow(QWidget *parent);
	~MyWindow();

private:
	QPushButton *m_button;
	
};

#endif // MYWINDOW_H
