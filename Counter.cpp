#include "Counter.h"
#include "wobjectimpl.h"

W_OBJECT_IMPL(Counter)
void Counter::setValue(int value)
{
    if (value != m_value) {
        m_value = value;
        emit valueChanged(value);
    }
};
