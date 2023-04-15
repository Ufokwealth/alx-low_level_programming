#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - A function that creates an array of integers.
 * @min: min value
 * @max: max value
 * Return: pointer
 */
int *array_range(int min, int max)
{
int *p;
int diff, a;
if (min > max)
return (NULL);
diff = max - min;
p = malloc((diff + 1) *sizeof(*p));
if (p == NULL)
return (NULL);
for (a = 0; a <= diff; a++)
p[a] = min++;
return (p);
}
