#include "cursor.h"
#include <QGridLayout>
#include <QFrame>

cursor::cursor(QWidget* parent) : QWidget(parent) {

	QFrame* frame1 = new QFrame(this);
	frame1->setFrameStyle(QFrame::Box);
	frame1->setCursor(Qt::SizeAllCursor);

	QFrame* frame2 = new QFrame(this);
	frame2->setFrameStyle(QFrame::Box);
	frame2->setCursor(Qt::WaitCursor);

	QFrame* frame3 = new QFrame(this);
	frame3->setFrameStyle(QFrame::Box);
	frame3->setCursor(Qt::PointingHandCursor);

	QGridLayout *grid = new QGridLayout();
	grid->addWidget(frame1, 0, 0);
	grid->addWidget(frame2, 0, 1);
	grid->addWidget(frame3, 0, 2);
	
	setLayout(grid);
}
