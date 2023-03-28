#include "main.h"

/**
* _stropy - function that copies the string
*
* @dest: pointer to the destination char
* @src: pointer tto source char
* Return: char
*/

char *_stropy(char *dest, char *src)
{
int i;
for (i = 0; src[i] != '\0'; i++)
{
*(dest + i) = *(src + i);
}
*(dest + i) = '\0';
return (dest);
}
