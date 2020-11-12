#ifndef DUMMYAUFGABENWIDGET_H
#define DUMMYAUFGABENWIDGET_H

#include "aufgabenwidget.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>

class DummyAufgabenWidget : public AufgabenWidget
{
	Q_OBJECT
public:
	explicit DummyAufgabenWidget(QWidget * parent = nullptr);

private:
	QVBoxLayout * lay = new QVBoxLayout;
	QLabel * lDisplay = new QLabel("Nichts zu sehen",this);
	QPushButton * pbSend = new QPushButton("Senden",this);

public slots:
	void changeValue(QVariant v);
};

#endif // DUMMYAUFGABENWIDGET_H
