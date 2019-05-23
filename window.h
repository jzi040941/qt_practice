#ifndef WINDOW_H

#define WINDOW_H
#include "wobjectdefs.h"
#include <QWidget>

class QLabel;

class Window : public QWidget
{
    W_OBJECT(Window)

public:
    Window();

private:
    QLabel *createLabel(const QString &text);
};

#endif // WINDOW_H
