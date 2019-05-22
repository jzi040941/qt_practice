#include <QApplication>
#include "window.h"
#include "dialog.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Window window;
    window.show();
   
    Dialog dialog;
    dialog.show();   
    return a.exec();
}
