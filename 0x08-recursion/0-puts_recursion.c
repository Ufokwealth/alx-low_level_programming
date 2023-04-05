#include <stdio.h>
/**
* _puts_recursion - function that prints a string, followed by a new line.
* @s: input
* Return: Always 0 (success)
*/
void _puts_recursion(char *s)
{
if (*s == '\0')
{
putchar('\n');
return;
}
putchar(*s);
s++;
_puts_recursion(s);
}
