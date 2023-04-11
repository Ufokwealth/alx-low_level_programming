#include "main.h"
#include <stdlib.h>
/**
 * create_array - a function that creates an array of chars
 * and initializes it with a specific char
 * @size: argument for size of array
 * @c: argument for char
 * Return: Always 0 (Success)
 */
char *create_array(unsigned int size, char c)
{
char *s;
unsigned int i = 0;
s = malloc(sizeof(char) * size);
if (size == 0)
return (NULL);
if (s == NULL)
return (NULL);
while (i < size)
{
s[i] = c;
i++;
}
return (s);
}
