#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -  a function that returns a pointer
 * to a 2 dimensional array of integers.
 * @width: input interger
 * @height: input integer
 * Return: Always 0
 */
int **alloc_grid(int width, int height)
{
int **a, i = 0, j = 0;
if (width <= 0 || height <= 0)
return (NULL);
a = (int **)malloc(sizeof(int) * height);
if  (a == NULL)
return (NULL);
for (; i < height; i++)
{
a[i] = (int *)malloc(sizeof(int) * width);
if (a[i] == NULL)
return (NULL);
}
for (i = 0; i < height; i++)
for (; j < width; j++)
a[i][j] = 0;
return (a);
}

