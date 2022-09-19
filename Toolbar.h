#pragma once
#include <QMainWindow>
#include <QWidget>
class Toolbar: public QMainWindow
{
	Q_OBJECT;

	public:
		Toolbar(QWidget* parent = nullptr);
};

