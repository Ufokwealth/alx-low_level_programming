#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
*_calloc - a function that allocates memory for an array, using mallocs
* @nmemb: number of elements
* @size: size of bytes
* Return: pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
int *p;
unsigned int i;
if (nmemb <= 0 || size <= 0)
return (NULL);
p = malloc(nmemb * size);
if (p == NULL)
return (NULL);
for (i = 0; i < nmemb; i++)
p[i] = 0;
return (p);
}
