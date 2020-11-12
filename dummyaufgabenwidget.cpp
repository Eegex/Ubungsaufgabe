#include "dummyaufgabenwidget.h"

DummyAufgabenWidget::DummyAufgabenWidget(QWidget * parent) : AufgabenWidget(parent)
{
	setLayout(lay);
	lay->addWidget(lDisplay);
	lay->addWidget(pbSend);
	connect(pbSend,&QPushButton::clicked,this,[&](){ emit valueChanged(QVariant("Platzhalter")); });
}

void DummyAufgabenWidget::changeValue(QVariant v)
{
	if(v.canConvert<QString>())
	{
		lDisplay->setText(v.toString());
	}
	else
	{
		lDisplay->setText("Ungültige Daten");
	}
}
