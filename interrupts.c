#include "inc/interrupts.h"
#include <at89c51rc2.h>

void GlobalIT_enable(bool on_off)
{
    EA = (on_off & 0x01);
}

void SerialIT_enable(bool on_off)
{
    ES = (on_off & 0x01);
}
