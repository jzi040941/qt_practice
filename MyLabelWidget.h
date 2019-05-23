#include <QWidget>
#include <QString>
#include "wobjectdefs.h"
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
class MyLabelWidget : public QWidget
{
  W_OBJECT(MyLabelWidget)

public:
    MyLabelWidget(QWidget *parent = 0);
 
    QLabel *label;
    QString string;
 
signals:
 
public slots:
    void setTextLabel();
    W_SLOT(setTextLabel) 
};
