#ifndef _DATA_H_
#define _DATA_H_

#include <stdio.h>
#include <stdint.h>

#define BASE_16 16 
#define BASE_10 10
uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base);
uint8_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base);

#endif
