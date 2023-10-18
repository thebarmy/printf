#include "main.h"

/**
 * get_size - Calculates the size of the format
 * @format: The format string
 * @i: The current index
 *
 * Return: The size
 */
int get_size(const char *format, int *i)
{
   int present_i;
   present_i = (*i) + 1;
   int size = 0;

    if (format[present_i] == 'l') {
    size = S_LONG;
} else if (format[present_i] == 'h') {
    size = S_SHORT;
}

*i = (size == 0) ? present_i - 1 : present_i;


    return size;
}
