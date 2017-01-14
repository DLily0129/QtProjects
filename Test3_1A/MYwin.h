#ifndef MYWIN_H
#define MYWIN_H

#include <QWidget>
#include <QLineEdit>
#include <QPlainTextEdit>
#include <QVBoxLayout>

class MYwin : public QWidget
{
	Q_OBJECT

public:
	MYwin(QWidget *parent);
	~MYwin();

private:
	QLineEdit *m_lineEdit;
	QPlainTextEdit *m_testEdit;
	
};

#endif // MYWIN_H
