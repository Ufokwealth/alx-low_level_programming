#include "main.h"
/**
* print_alphabet_x10 - prints alphabet 10 times
* Description: uses _putchar function to print
* Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
char i;
int k;
for (k = 0; k < 10; k++)
{
for (i = 'a'; i <= 'z'; i++)
{
_putchar(i);
}
_putchar('\n');
}
}
