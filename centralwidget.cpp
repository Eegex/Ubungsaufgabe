#include "centralwidget.h"
#include "kind3.h"


CentralWidget::CentralWidget(QWidget *parent) : QWidget(parent)
{
    turkis = new Kind1(this);
	orange = new DummyAufgabenWidget(this);
	lila = new kind3(this);
	grun = new kind(this);
	lay->addWidget(turkis,0,0);
	lay->addWidget(orange,0,1);
	lay->addWidget(grun,1,0);
	lay->addWidget(lila,1,1);
	connect(turkis,&AufgabenWidget::valueChanged,orange,&AufgabenWidget::changeValue);
	connect(orange,&AufgabenWidget::valueChanged,lila,&AufgabenWidget::changeValue);
	connect(lila,&AufgabenWidget::valueChanged,grun,&AufgabenWidget::changeValue);
	connect(grun,&AufgabenWidget::valueChanged,turkis,&AufgabenWidget::changeValue);
}
