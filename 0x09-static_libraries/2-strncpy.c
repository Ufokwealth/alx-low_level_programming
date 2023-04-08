#include "main.h"
/**
* _strncpy - a function that copys a strings.
* @dest: input value
* @src: input value
* @n: input value
*
* Return: A pointer to the resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
int j;
j = 0;
while (j < n && src[j] != '\0')
{
dest[j] = src[j];
j++;
}
while (j < n)
{
dest[j] = '\0';
j++;
}
return (dest);
}
