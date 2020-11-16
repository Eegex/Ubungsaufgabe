#ifndef KIND3_H
#define KIND3_H

#include "aufgabenwidget.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QComboBox>

class kind3 : public AufgabenWidget
{
	Q_OBJECT
public:
    explicit kind3(QWidget * parent = nullptr);

private:
	QVBoxLayout * lay = new QVBoxLayout;
	QLabel * lDisplay = new QLabel("Nichts zu sehen",this);
    QComboBox* comboBox = new QComboBox();
	QPushButton * pbSend = new QPushButton("Senden",this);

public slots:
	void changeValue(QVariant v);
};

#endif // KIND3_H
