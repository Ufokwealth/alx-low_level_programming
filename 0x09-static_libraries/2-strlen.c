#include "main.h"
/**
* _strlen - returns tha length of a string
* @s: string
* Return: lengthh
*/
int _strlen(char *s)
{
int longi = 0;
while (*s != '\0')
{
longi++;
s++;
}
return (longi);
}
