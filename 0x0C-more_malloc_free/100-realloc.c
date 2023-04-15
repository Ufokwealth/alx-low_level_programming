#include "main.h"
#include <stdlib.h>
/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size in bytes
 * @new_size: new size in bytes
 * Return: void pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *s, *new_ptr;
unsigned int i = 0;
if (new_size == old_size)
return (ptr);
if (ptr == NULL) /* treat as normal malloc */
{
ptr = malloc(new_size);
if (ptr == NULL)
return (NULL);
return (ptr);
}
if (new_size == 0 && ptr)
{
free(ptr);
return (NULL);
}
s = malloc(new_size);
new_ptr = ptr;
if (old_size > new_size)
old_size = new_size;
for (i = 0; i < old_size; i++)
s[i] = new_ptr[i];
free(ptr);
return (s);
}
