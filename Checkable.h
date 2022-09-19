#pragma once
#include <QMainWindow>
#include <QAction>
#include <QApplication>
class Checkable : public QMainWindow
{
	Q_OBJECT;

	public:
		Checkable(QWidget* parent = nullptr);

	private slots:
		void  toggleStatusBar();

	private:
		QAction* viewst;
};

