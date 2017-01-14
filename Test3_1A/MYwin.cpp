#include "MYwin.h"

MYwin::MYwin(QWidget *parent)
	: QWidget(parent)
{
   m_lineEdit=new QLineEdit(this);
   m_testEdit=new QPlainTextEdit(this);

   QVBoxLayout *m_vboxlayout=new QVBoxLayout(this);
   m_vboxlayout->addWidget(m_lineEdit);
   m_vboxlayout->addWidget(m_testEdit);

   this->setLayout(m_vboxlayout);
}

MYwin::~MYwin()
{

}
