#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list -  print all the elements of a list_t list.
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t s;
for (s = 0; h; s++)
{
printf("[%d] %s\n", h->len, h->str);
h = h->next;
}
return (s);
}
