#include "simpleMenu.h"
#include <QMenu>
#include <QMenuBar>
#include <QMainWindow>

simpleMenu::simpleMenu(QWidget* parent) : QMainWindow(parent) {
	QAction* quit = new QAction("Quit", this);

	QMenu* file = menuBar()->addMenu("File");
	file->addAction(quit);

	connect(quit, &QAction::triggered, qApp, &QApplication::quit);
}
