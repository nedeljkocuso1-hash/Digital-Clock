#ifndef GPIO_H
#define GPIO_H

#include <stdint.h>

void init_gpio(uint8_t port_p0, uint8_t port_p2);
void setP2(uint8_t port_p2);
uint8_t getP0();

#endif
