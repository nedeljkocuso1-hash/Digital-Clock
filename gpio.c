#include "inc/gpio.h"
#include <at89c51rc2.h>

void init_gpio(uint8_t port_p0, uint8_t port_p2)
{
    P0 = port_p0;
    P2 = port_p2;   
}

void setP2(uint8_t port_p2)
{
    P2 = port_p2;
}

uint8_t getP0()
{
    return P0;
}
