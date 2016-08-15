#include "widget.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    w.show();
    Widget w2;
    w2.show();
    Widget w3;
    w3.show();
    Widget w4;
    w4.show();

    return a.exec();
}
