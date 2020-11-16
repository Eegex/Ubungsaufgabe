#include "kind1.h"
#include <QDebug>

Kind1::Kind1(QWidget * parent) : AufgabenWidget(parent)
{
    setLayout(lay);
    lay->addWidget(lDisplay);
    //lay->addWidget(lLineEdit);
    lay->addWidget(dateEdit);
    lay->addWidget(pbSend);
    connect(pbSend,&QPushButton::clicked,this,[&](){emit valueChanged(QVariant(dateEdit->date())); });
}

void Kind1::changeValue(QVariant v)
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
