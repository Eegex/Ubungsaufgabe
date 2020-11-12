#include "aufgabenwidget.h"

AufgabenWidget::AufgabenWidget(QWidget *parent) : QWidget(parent)
{
	setLayout(lay);
	lay->addWidget(lDisplay);
	lay->addWidget(pbSend);
	connect(pbSend,&QPushButton::clicked,this,[&](){ emit valueChanged(QVariant("Platzhalter")); });
}

void AufgabenWidget::changeValue(QVariant v)
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
