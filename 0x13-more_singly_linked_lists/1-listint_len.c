#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function that returns elements in the list
 * @h: a pointer to listint_t structure
 * Return: number of elements.
 */
size_t listint_len(const listint_t *h)
{
size_t nodes = 0;
while (h)
{
h = h->next;
nodes++;
}
return (nodes);
}
