#ifndef _COUNTER_H
#define _COUNTER_H

#include <QObject>
#include "wobjectdefs.h"

class Counter : public QObject
{
    W_OBJECT(Counter)

public:
    Counter() { m_value = 0; }

    int value() const { return m_value; }

public slots:
    void setValue(int value);
    W_SLOT(setValue)
signals:
    void valueChanged(int newValue)
    W_SIGNAL(valueChanged,newValue)
private:
    int m_value;
};

#endif
