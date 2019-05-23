#include <QApplication>
#include "window.h"
#include "dialog.h"
#include "MyLabelWidget.h"
#include "Counter.h"
#include <iostream>
int main(int argc, char *argv[])
{
    QApplication::addLibraryPath("../libs/Qt5");
    QApplication a(argc, argv);
    /*
    Window window;
    window.show();
   
    Dialog dialog;
    dialog.show();
    */
    MyLabelWidget widget;
    widget.show();   
    
    Counter c, b;
    QObject::connect(&c, &Counter::valueChanged, &b, &Counter::setValue);
    
    std::cout<<b.value()<<std::endl;
    c.setValue(12);     // a.value() == 12, b.value() == 12
    std::cout<<b.value()<<std::endl;
    b.setValue(48);     // a.value() == 12, b.value() == 48
    std::cout<<b.value()<<std::endl;    
    return a.exec();
}
