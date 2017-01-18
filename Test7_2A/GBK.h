#ifndef GBK_H
#define GBK_H

#include <QString>
#include <QTextCodec>
#include <string>
using std::string;

class GBK
{
public:
	static string FromQSring (const QString qstr)
	{
		QTextCodec *pCodec=QTextCodec::codecForName("gbk");
		if(!pCodec)   return"";

		QByteArray arr=pCodec->fromUnicode(qstr);
		string cstr=arr.data();
		return cstr;

	}

	static QString ToQString(const string &cstr)
	{
		QTextCodec *pCodec=QTextCodec::codecForName("gbk");
		if(!pCodec)  return"";

		QString	qstr=pCodec->toUnicode(cstr.c_str(),cstr.length());
		return qstr;

	}

};

#endif