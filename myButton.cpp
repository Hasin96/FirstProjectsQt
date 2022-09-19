#include "myButton.h"
#include <QApplication>
#include <QWidget>
#include <QPushButton>
myButton::myButton(QWidget* parent) : QWidget(parent) {
	QPushButton* quitBtn = new QPushButton("Quit", this);
	quitBtn->setGeometry(50, 50, 100, 50);

	connect(quitBtn, &QPushButton::clicked, qApp, QApplication::quit);
}
