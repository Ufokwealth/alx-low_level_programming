#include "main.h"
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory
 * @str: an input pointer of the string copy
 * Return: pointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
char *s, *start;
int i = 0, len = 0;
if (str == NULL)
return (NULL);
start = str;
while (*str)
{
len++;
str++;
}
str = start;
s = malloc(sizeof(char) * (len + 1));
start = s;
if (s != NULL)
{
for (; i < len; i++)
{
s[i] = *str;;
str++;
}
s[i] = '\0';
return (start);
}
else
return (NULL);
}
