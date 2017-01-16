
#ifndef _SOURCE_H
#define _SOURCE_H

/* Source
	数据源：号码列表
*/

#include "AfTinyXml.h"

class Source
{
public:
	Source();

	int load();

public:
	vector<string> numbers;
};


#endif

