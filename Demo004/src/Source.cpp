
#include <stdio.h>
#include <string.h>

#include "AfTinyXml.h"
#include "Source.h"


Source::Source()
{

}

int Source::load()
{
	numbers.clear();

	// ����xml
	TiXmlDocument xml_doc;
	if(!xml_doc.LoadFile("numbers.xml"))
	{
		return -1;
	}

	// ���ڵ�
	TiXmlElement* xml_root = xml_doc.RootElement();
	if (NULL == xml_root)
	{
		return -1;
	}

	// �����б�
	TiXmlElement* xml_parent = xml_root->FirstChildElement("NumberList");
	if(xml_parent)
	{
		TiXmlElement* xml_child = xml_parent->FirstChildElement("Number");
		while(xml_child)
		{
			// 
			string value = xml_child->GetText();
			numbers.push_back(value);

			xml_child = xml_child->NextSiblingElement("Number");
		}
	}

	return 0;
}