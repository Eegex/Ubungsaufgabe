#ifndef AUFGABENWIDGET_H
#define AUFGABENWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QVariant>

class AufgabenWidget : public QWidget
{
	Q_OBJECT
public:
	explicit AufgabenWidget(QWidget *parent = nullptr);

public slots:
	virtual void changeValue(QVariant v);

signals:
	void valueChanged(QVariant v);

private:
	QVBoxLayout * lay = new QVBoxLayout;
	QLabel * lDisplay = new QLabel("Nichts zu sehen",this);
	QPushButton * pbSend = new QPushButton("Senden",this);

};

#endif // AUFGABENWIDGET_H
