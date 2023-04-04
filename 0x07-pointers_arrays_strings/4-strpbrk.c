#include "main.h"
/**
* _strpbrk - a function that searches a string for any set of bytes.
* @s: input
* @accept: input
* Return: Always o (Success)
*/
char *_strpbrk(char *s, char *accept)
{
int r;
while (*s)
{
for (r = 0; accept[r]; r++)
{
if (*s == accept[r])
return (s);
}
s++;
}
return ('\0');
}
