#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
char *s;
int i, len;
s = malloc(sizeof(str));
i = len = 0;
while (str[i] != '\0')
{
len++;
i++;
}
if (s == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
{
s[i] = str[i];
i++;
}
return (s);
}

