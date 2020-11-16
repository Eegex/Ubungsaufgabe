#include "kind2.h"

Kind2::Kind2(QWidget *parent) : AufgabenWidget(parent){
    setLayout(lay);
    lay->addWidget(lDisplay);
    //lay->addWidget(lLineEdit);
    lay->addWidget(lSpinBox);
    lay->addWidget(pbSend);
    lSpinBox->setSuffix("€");
    connect(pbSend,&QPushButton::clicked,this,&Kind2::handleButtonPress);
}
void Kind2::handleButtonPress()
{
    emit valueChanged(QVariant(lSpinBox->text()));
}
void Kind2::changeValue(QVariant v)
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
