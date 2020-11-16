#ifndef KIND2_H
#define KIND2_H

#include "aufgabenwidget.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QDate>
#include <QDoubleSpinBox>

class Kind2 : public AufgabenWidget
{
    Q_OBJECT
public:
    explicit Kind2(QWidget * parent = nullptr);

    // AufgabenWidget interface

private:
    QVBoxLayout * lay = new QVBoxLayout;
    QLabel * lDisplay = new QLabel("Nichts zu sehen",this);
    QDoubleSpinBox  * lSpinBox = new QDoubleSpinBox(this);
    QPushButton * pbSend = new QPushButton("Senden",this);

public slots:
    void changeValue(QVariant v);

private slots:
    void handleButtonPress();
};

#endif // KIND2_H
