#include "main.h"
/**
* _strlen_recursion - a function that returns the lenggth of a string.
* @s: input
* Return: integer value
*/
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (_strlen_recursion(s) + 1);
}