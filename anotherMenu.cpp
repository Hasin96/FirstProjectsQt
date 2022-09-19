#include "anotherMenu.h"
#include <QPixmap>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QApplication>
anotherMenu::anotherMenu(QWidget* parent) : QMainWindow(parent) {
	QPixmap newa("ded.png");
	QPixmap edit("ded.png");
	QPixmap quit("ded.png");

	QAction* quita = new QAction(quit, "&Quit", this);
	quita->setShortcut(tr("CTRL+Q"));
	QAction* newaa = new QAction(newa, "&New", this);
	QAction* edita = new QAction(edit, "&Edit", this);

	QMenu *file = menuBar()->addMenu("&File");
	file->addAction(newaa);
	file->addAction(edita);
	file->addSeparator();
	file->addAction(quita);

	qApp->setAttribute(Qt::AA_DontShowIconsInMenus, false);

	connect(quita, &QAction::triggered, qApp, QApplication::quit);
}
