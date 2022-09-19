#include "Toolbar.h"
#include <QPixmap>
#include <QToolBar>
#include <QAction>
#include <QApplication>

Toolbar::Toolbar(QWidget* parent) : QMainWindow(parent) {
	QPixmap newPix("ded.png");
	QPixmap editPix("ded.png");
	QPixmap quitPix("ded.png");

	QToolBar* toolbar = addToolBar("Main toolbar");
	toolbar->addAction(QIcon(newPix), "Create new");
	toolbar->addAction(QIcon(editPix), "Open new");
	toolbar->addSeparator();

	QAction* quit = toolbar->addAction(QIcon(quitPix), "Quit app");

	connect(quit, &QAction::triggered, qApp, QApplication::quit);
}
