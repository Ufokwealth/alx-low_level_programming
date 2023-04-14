#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * malloc_checked - allocates memory using malloc.
 * Description: if malloc fails,terminate process wit status 98.
 * @b: An unsigned input integer
 * Return: A pointer to allocated memory or NULL if it fails
 */
void *malloc_checked(unsigned int b)
{
void *p;
p = malloc(b);
if (p == NULL)
exit(98);
return (p);
}
