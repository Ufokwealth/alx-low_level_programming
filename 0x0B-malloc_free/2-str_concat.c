#include "main.h"
#include <stdlib.h>
/**
* str_concat - a function that concatenates two string
* @s1: parameter for string 1
* @s2: parameter for string 2
* Return: 0
*/
char *str_concat(char *s1, char *s2)
{
int a, b, c;
char *s;
c = 0;
s = malloc(sizeof(*s1 +  *s2));
if (s == NULL)
return (NULL);
a = 0;
while (s1[a] != '\0')
{
s[c] = s1[a];
a++;
c++;
}
b = 0;
while (s2[b] != '\0')
{
s[c] = s2[b];
b++;
c++;
}
return (s);
free(s);
}
