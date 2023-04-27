#include "lists.h"
#include <stdio.h>
/**
 * print_list -  print all the elements of a list_t list.
 * @h: head of linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
size_t s = 0;
while (h)
{
if (!h->str)
printf("[0](nill)\n");
else
printf("[%d] %s\n", h->len, h->str);
h = h->next;
s++;
}
return (s);
}
