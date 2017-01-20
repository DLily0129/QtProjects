#ifndef AFPICTURE_H
#define AFPICTURE_H

#include <QFrame>

/* AfPicture
	��������ʾͼ��

	���ߣ��۷�
	�汾: 2016-03-14
	����: http://afanihao.cn 
	������Ϊ C/C++ѧϰָ��(ʵսƪ) �ٷ�ʾ�����룬���°汾�뵽��������

*/

class AfPicture : public QFrame
{
	Q_OBJECT

public:
	AfPicture(QWidget *parent);
	~AfPicture();

	// ��imageFileΪNULL�����ʾ����ʾͼƬ
	void display(const QString& imageFile);
	void display(const QPixmap& pixmap);

	const QPixmap& pixmap()
	{
		return m_picture;
	}

private:
	void paintEvent ( QPaintEvent * event );

private:
	QPixmap m_picture;
};

#endif // AFPICTURE_H
