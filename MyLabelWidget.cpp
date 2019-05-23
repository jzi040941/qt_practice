#include "MyLabelWidget.h"
#include "wobjectimpl.h"
#include "MyButtonWidget.h"
W_OBJECT_IMPL(MyLabelWidget)

void MyLabelWidget::setTextLabel()
{
    label->setText("Test");
}
 
MyLabelWidget::MyLabelWidget(QWidget *parent) :
    QWidget(parent)
{
    QPushButton *quit = new QPushButton("Quit");
    //MyButtonWidget *quit = new MyButtonWidget("Quit");
    QPushButton *showtext = new QPushButton("Show");
    label = new QLabel;
 
    //QObject::connect(quit, SIGNAL(clicked()), qApp, SLOT(quit()));
    QObject::connect(showtext, SIGNAL(clicked()), this, SLOT(setTextLabel()));
 
    QVBoxLayout *layout = new QVBoxLayout;
 
    layout->addWidget(label);
    layout->addWidget(showtext);
    layout->addWidget(quit);
    setLayout(layout);
}
