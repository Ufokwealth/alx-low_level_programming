#include "main.h"
/**
 * set_bit - function that sets a bit at a given index to 1
 * @n: number to set bit in
 * @index: index to set bit at
 * Return: 1 if it worked, or -1 on error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
unsigned long int max = 0x01;
max <<= index;
if (max == 0)
return (-1);
*n |= max;
return (1);
}
