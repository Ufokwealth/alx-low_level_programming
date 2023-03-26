#include "main.h"

/**
 * print_number - a function that prints an integer.
 * @n: an input integer
 * Return: Nothing
 */

void print_number(int n)
{
if (n < 0)
{
n = n;
_putchar('_');
}
if (n / 10)
print_number(n / 10);
_putchar(n % 10 + '0');
}
