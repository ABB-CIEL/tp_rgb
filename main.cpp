#include "mymainwindow.h"
#include <QtGui>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    MyMainWindow myMainWindows;
    myMainWindows.show();
    return app.exec();
}
