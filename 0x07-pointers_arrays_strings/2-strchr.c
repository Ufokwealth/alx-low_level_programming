#include "main.h"
/**
* _strchr - a functin that locates character in a string
* @s: input string
* @c: input characr
* Return:  Return pointer to the first occurrence of character

*/
char *_strchr(char *s, char c)
{
int i = 0;
for (; s[i] >= '\0'; i++)
{
if s[i] == c
return (&s[i]);
}
return (0);
}
