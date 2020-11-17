#include "kind3.h"
#include <QMetaType>
#include <QDebug>
#include <QRegularExpression>
#include <QRegularExpressionMatch>

//ein kommentar
kind3::kind3(QWidget * parent) : AufgabenWidget(parent)
{
	setLayout(lay);
	lay->addWidget(lDisplay);
	QStringList list = {"Brandenburg", "Berlin", "Mecklenburg-Vorpommern", "Hamburg",
						"Bremen", "Niedersachsen", "Schleswig-Holstein", "Hessen",
						"Sachen", "Sachsen-Anhalt", "Thüringen", "Bayern",
						"Baden-Württemberg", "Saarland", "Nordrhein-Westfalen", "Rheinland-Pfalz"};
	list.sort();
	comboBox->addItems(list);
	lay->addWidget(comboBox);

	lay->addWidget(pbSend);
	connect(pbSend,&QPushButton::clicked,this,[&](){ emit valueChanged(QVariant(comboBox->currentText())); });
}

void kind3::changeValue(QVariant v)
{
	if(v.canConvert<QString>())
	{
		QString string = v.toString();
		QRegularExpression regex("(\\d+([\\.,]\\d+)?)(.*)");
		QRegularExpressionMatch match = regex.match(string);
		if(match.hasMatch())
		{
			QString temp = match.captured(1);
			temp.replace(',', '.');
			double amount = temp.toDouble();
			amount = (int)(amount*100+0.5)/100.0;
			QString amountText = QString::number(amount);
			if(amountText.contains("."))
			{
				while(amountText.indexOf(".")>amountText.length()-3)
				{
					amountText+=QString("0");
				}
			}
			QString unit = match.captured(3);
			lDisplay->setText(amountText.append(unit));
			return;
		}
	}
	lDisplay->setText("Ungültige Daten");
}
