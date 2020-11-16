#ifndef KIND1_H
#define KIND1_H

#include "aufgabenwidget.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
// #include <QLineEdit>
#include <QDate>
#include <QDateEdit>

class Kind1 : public AufgabenWidget
{
    Q_OBJECT
public:
    explicit Kind1(QWidget * parent = nullptr);

    // AufgabenWidget interface

private:
    QVBoxLayout * lay = new QVBoxLayout;
    QLabel * lDisplay = new QLabel("Nichts zu sehen",this);
    //QLineEdit * lLineEdit = new QLineEdit("Geburtsdatum eingeben",this);
    QDateEdit * dateEdit = new QDateEdit(QDate::currentDate(), this);
    QPushButton * pbSend = new QPushButton("Senden",this);

public slots:
    void changeValue(QVariant v);

};

#endif // KIND1_H
