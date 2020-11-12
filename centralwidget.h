#ifndef CENTRALWIDGET_H
#define CENTRALWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include "aufgabenwidget.h"
#include "dummyaufgabenwidget.h"

class CentralWidget : public QWidget
{
	Q_OBJECT
public:
	explicit CentralWidget(QWidget *parent = nullptr);

private:
	QGridLayout * lay = new QGridLayout(this);
	AufgabenWidget * turkis = nullptr;
	AufgabenWidget * orange = nullptr;
	AufgabenWidget * lila = nullptr;
	AufgabenWidget * grun = nullptr;
signals:

};

#endif // CENTRALWIDGET_H
