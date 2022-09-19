#include "Checkable.h"
#include <QWidget>
#include <QMenu>
#include <QMenuBar>
#include <QStatusBar>

Checkable::Checkable(QWidget* parent) : QMainWindow(parent) {
	viewst = new QAction("&View statusbar", this);
	viewst->setCheckable(true);
	viewst->setChecked(true);

	QMenu* file = menuBar()->addMenu("&File");
	file->addAction(viewst);

	statusBar();

	connect(viewst, &QAction::triggered, this, &Checkable::toggleStatusBar);
}

void  Checkable::toggleStatusBar() {
	if (viewst->isChecked()) {
		statusBar()->show();
	}
	else {
		statusBar()->hide();
	}
}
