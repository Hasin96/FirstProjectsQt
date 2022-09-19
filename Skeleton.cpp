#include "Skeleton.h"
#include <QPixmap>
#include <QAction>
#include <QApplication>
#include <QMenuBar>
#include <QMenu>
#include <QToolBar>
#include <QTextEdit>
#include <QStatusBar>

Skeleton::Skeleton(QWidget* parent) : QMainWindow(parent) {
	QPixmap newPix("ded.png");
	QPixmap openPix("ded.png");
	QPixmap quitPix("ded.png");

	auto* quit = new QAction(quitPix, "Quit", this);
	quit->setShortcut(tr("CTRL+P"));
	QMenu* file = menuBar()->addMenu("File");
	file->addAction(quit);

	connect(quit, &QAction::triggered, qApp, QApplication::quit);

	QToolBar *toolbar = addToolBar("Main toolbar");
	toolbar->addAction(QIcon(newPix), "New");
	toolbar->addAction(QIcon(openPix), "Open");
	toolbar->addSeparator();

	QAction* quit2 = toolbar->addAction(QIcon(quitPix), "Quit");

	connect(quit2, &QAction::triggered, qApp, QApplication::quit);

	auto* edit = new QTextEdit(this);

	setCentralWidget(edit);
	
	statusBar()->showMessage("Ready");

}
