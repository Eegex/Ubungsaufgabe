#include "centralwidget.h"

CentralWidget::CentralWidget(QWidget *parent) : QWidget(parent)
{
	A = nullptr;
	B = nullptr;
	C = nullptr;
	D = nullptr;
	lay->addWidget(A,0,0);
	lay->addWidget(B,0,1);
	lay->addWidget(C,1,0);
	lay->addWidget(D,1,1);
	connect(A,&AufgabenWidget::valueChanged,B,&AufgabenWidget::changeValue);
	connect(B,&AufgabenWidget::valueChanged,C,&AufgabenWidget::changeValue);
	connect(C,&AufgabenWidget::valueChanged,D,&AufgabenWidget::changeValue);
	connect(D,&AufgabenWidget::valueChanged,A,&AufgabenWidget::changeValue);
}
