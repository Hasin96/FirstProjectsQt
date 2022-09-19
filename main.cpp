#include "firstprojectsqt.h"
#include <QtWidgets/QApplication>
#include "cursor.h";
#include "myButton.h"
#include "plusMinus.h"
#include "simpleMenu.h";
#include "anotherMenu.h";
#include "Checkable.h";
#include "Toolbar.h"
#include "Skeleton.h"
int main(int argc, char* argv[])
{
    int width = 350;
    int height = 150;

    QApplication a(argc, argv);
    Skeleton w;

    QDesktopWidget *desktop = QApplication::desktop();

    w.resize(500, 500);
    w.setWindowTitle("FirstProj");
    w.setToolTip("PENIS LICKER OH YEAH BABY");

    w.show();
    return a.exec();
}
