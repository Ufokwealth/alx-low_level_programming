#include "main.h"
/**
* int print_last_digit- check code
* @r: An integre input
* Description: this function prints the last digit of a number
* Return: last digit of number
*/
int print_last_digit(int r)
int n;
if (r < 0)
n = -1 * (r % 10);
else
= r % 10;
_putchar((n % 10) + '0');
return (n % 10);
}
