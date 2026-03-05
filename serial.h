#ifndef SERIAL_H
#define SERIAL_H

#include <stdint.h>

void Serial_Init(uint8_t SMOD1, uint8_t SPD, uint8_t br1);
void send(uint8_t* msg);
void send_alarm();  // Dodana za alarm
#endif
