#pragma once
#include <QWidget>
#include <QLabel>
class plusMinus: public QWidget
{
	Q_OBJECT;

	public:
		plusMinus(QWidget* parent = nullptr);

	private slots:
		void OnPlus();
		void OnMinus();

	private:
		QLabel *lbl;
};

