#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Function that prints all elements in the list
 * @h: A pointer to listint structure
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
const listint_t *c;
size_t count;
for (c = h, count = 0; c != NULL; count++, c = c->next)
printf("%d\n", c->n);
return (count);
}
