#include <QWidget>
#include <QString>
#include "wobjectdefs.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
class MyButtonWidget : public QPushButton
{
  W_OBJECT(MyButtonWidget)
  
public:
   MyButtonWidget(const char* name) : QPushButton(name){}
signals:
 
public slots:
    void setTextButton();
    W_SLOT(setTextButton) 
};
