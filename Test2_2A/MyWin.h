#ifndef MYWIN_H
#define MYWIN_H

#include <QWidget>
#include <QPushButton>

class MyWin : public QWidget
{
	Q_OBJECT

public:
	MyWin(QWidget *parent);
	~MyWin();

private:
	QPushButton *m_button;
	
};

#endif // MYWIN_H
