#include "centralwidget.h"

CentralWidget::CentralWidget(QWidget *parent) : QWidget(parent)
{
	turkis = new AufgabenWidget(this);
	orange = new AufgabenWidget(this);
	lila = new AufgabenWidget(this);
	grun = new AufgabenWidget(this);
	lay->addWidget(turkis,0,0);
	lay->addWidget(orange,0,1);
	lay->addWidget(grun,1,0);
	lay->addWidget(lila,1,1);
	connect(turkis,&AufgabenWidget::valueChanged,orange,&AufgabenWidget::changeValue);
	connect(orange,&AufgabenWidget::valueChanged,lila,&AufgabenWidget::changeValue);
	connect(lila,&AufgabenWidget::valueChanged,grun,&AufgabenWidget::changeValue);
	connect(grun,&AufgabenWidget::valueChanged,turkis,&AufgabenWidget::changeValue);
}
