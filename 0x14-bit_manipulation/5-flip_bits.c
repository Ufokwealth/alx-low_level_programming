#include "main.h"
/**
 * flip_bits - function that gets number of bits needed to flip
 * @n: number of bit flips
 * @m: number to set other equal
 * Return: number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int flips = 0;
unsigned long int xor = (n ^ m);
unsigned long int max = 0x01;
while (max & xor)
{
if (max & xor)	
flips++;
max <<= 1;
}
return (flips);
}
