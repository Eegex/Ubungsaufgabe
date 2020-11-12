#ifndef AUFGABENWIDGET_H
#define AUFGABENWIDGET_H

#include <QWidget>
#include <QVariant>

class AufgabenWidget : public QWidget
{
	Q_OBJECT
public:
	explicit AufgabenWidget(QWidget *parent = nullptr);

public slots:
	virtual void changeValue(QVariant v) = 0;

signals:
	virtual void valueChanged(QVariant v);


};

#endif // AUFGABENWIDGET_H
