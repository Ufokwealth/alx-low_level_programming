#include "main.h"
/**
* _print_rev_recursion - a function that prints string in reverse.
* @s: input
* Return: Always 0 (Success)
*/
void _print_rev_recursion(char *s)
{
if (*s == '\0')
{
return;
}
s++;
_print_rev_recursion(s);
s--;
_putchar(*s);
}
