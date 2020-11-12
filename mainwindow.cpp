#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	c = new CentralWidget(this);
	setCentralWidget(c);
	show();
}

MainWindow::~MainWindow()
{
}

