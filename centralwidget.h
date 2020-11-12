#ifndef CENTRALWIDGET_H
#define CENTRALWIDGET_H

#include <QWidget>
#include <QGridLayout>
#include "aufgabenwidget.h"

class CentralWidget : public QWidget
{
	Q_OBJECT
public:
	explicit CentralWidget(QWidget *parent = nullptr);

private:
	QGridLayout * lay = new QGridLayout(this);
	AufgabenWidget * A = nullptr;
	AufgabenWidget * B = nullptr;
	AufgabenWidget * C = nullptr;
	AufgabenWidget * D = nullptr;
signals:

};

#endif // CENTRALWIDGET_H
