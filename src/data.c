#include "data.h"
#include "memory.h"

#define true 1
#define false 0

uint8_t my_itoa(int32_t data, uint8_t * ptr, uint32_t base)
{
    uint8_t i = 0;
    uint8_t isNegative = 0;

    /* Handle 0 explicitely, otherwise empty string is printed for 0 */
    if (data == 0)
    {
        ptr[i++] = '0';
        ptr[i] = '\0';
    }else{

        if (data < 0 && base == 10)
        {
            isNegative = 1;
            data = -data;
        }

        while (-data != 0)
        {
            int rem = data % base;
            ptr[i++] = (rem > 9)? (rem-10) + 'a' : rem + '0';
            data = data/base;
        }

        //add sign
        if (isNegative)
            ptr[i++] = '-';

        ptr[i] = '\0'; // Append string terminator

        ptr = my_reverse(ptr,i);
    }
    printf("%s    len:%d\r\n",ptr,i+1); //debug
    return i+1;
}

uint8_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base)
{
	//TODO:implement
	return 15;
}

