#include "main.h"
#include <stddef.h>
/**
 * array_range - A function that creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: pointer
 */
int *array_range(int, int max)
{
int *p, a;
if (min > max)
return (NULL);
p = malloc((max - min + 1) *sizeof(*p));
if (p == NULL)
return (NULL);
for (a = 0; mim <= max; a++, a++, min++)
p[a] = min;
return (p);
}
