#ifndef KIND_H
#define KIND_H

#include "aufgabenwidget.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QLineEdit>

class kind : public AufgabenWidget
{
    Q_OBJECT
public:
    kind(QWidget * parent = nullptr);
private:
    QVBoxLayout * lay = new QVBoxLayout;
    QLabel * lDisplay = new QLabel("Nichts zu sehen",this);
    QPushButton * pbSend = new QPushButton("Senden",this);
    QLineEdit *textfield = new QLineEdit();
    // AufgabenWidget interface
public slots:
    void changeValue(QVariant v);
};

#endif // KIND_H
