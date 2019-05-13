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

int32_t my_atoi(uint8_t * ptr, uint8_t digits, uint32_t base)
{
    int32_t val = 0;
    if(base==BASE_16)
    {
      while (*ptr) {
        // get current character then increment
        uint8_t byte = *ptr++;
        // transform hex character to the 4bit equivalent number, using the ascii table indexes
        if (byte >= '0' && byte <= '9') byte = byte - '0';
        else if (byte >= 'a' && byte <='f') byte = byte - 'a' + 10;
        else if (byte >= 'A' && byte <='F') byte = byte - 'A' + 10;
        // shift 4 to make space for new digit, and add the 4 bits of the new digit
        val = (val << 4) | (byte & 0xF);
      }
    }
    else if(base==BASE_10)
    {
      while (*ptr) {
        val = (val << 3) + (val << 1) + (*ptr) - '0';
        ptr++;
      }
    }

    return val;

}

