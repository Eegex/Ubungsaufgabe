#include "kind.h"
#include <QStringList>
#include <QCompleter>

kind::kind(QWidget * parent) : AufgabenWidget(parent)
{
    setLayout(lay);
    lay->addWidget(lDisplay);
    lay->addWidget(textfield);
    lay->addWidget(pbSend);
    textfield->setPlaceholderText("Lieblingsessen");

    QStringList wordList;
    wordList << "Hamburger" << "Pizza" << "Pommes" << "Salat" << "Hotdog";
    QCompleter *completer = new QCompleter(wordList, this);
    completer->setCaseSensitivity(Qt::CaseInsensitive);
    textfield->setCompleter(completer);

    connect(pbSend,&QPushButton::clicked,this,[&](){ emit valueChanged(QVariant(textfield->text())); });
}

void kind::changeValue(QVariant v)
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
