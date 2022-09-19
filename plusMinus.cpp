#include "plusMinus.h"
#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QGridLayout>
#include <QApplication>
plusMinus::plusMinus(QWidget* parent) : QWidget(parent) {
	QPushButton* plusBtn = new QPushButton("+", this);
	QPushButton* minusBtn = new QPushButton("-", this);
	lbl = new QLabel("0", this);

	QGridLayout* grid = new QGridLayout();
	grid->addWidget(plusBtn, 0, 0);
	grid->addWidget(minusBtn, 0, 1);
	grid->addWidget(lbl, 1, 1);

	connect(plusBtn, &QPushButton::clicked, this, &plusMinus::OnPlus);
	connect(minusBtn, &QPushButton::clicked, this, &plusMinus::OnMinus);
}

void plusMinus::OnPlus() {
	int curNum = lbl->text().toInt();
	curNum++;
	lbl->setText(QString::number(curNum));
}

void plusMinus::OnMinus() {
	int curNum = lbl->text().toInt();
	curNum--;
	lbl->setText(QString::number(curNum));
}
