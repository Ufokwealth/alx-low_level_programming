#include "lists.h"
/**
 * list_len -  function that returns the number
 * of elements in a linked list_t list.
 * @h: head of linked list
 * Return: number of nodes as size_t
 */
size_t list_len(const list_t *h)
{
unsigned int nodes = 0;
while (h)
{
nodes++;
h = h->next;
}
return (nodes);
}
