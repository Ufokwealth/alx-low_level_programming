#include "lists.h"
/**
 * get_nodeint_at_index -  function that returns the
 * node of a listint_t linked list.
 * @head: pointter to listint_t structure
 * @index: the index of a node
 * Return: pointerto node at specified index,or NULL if doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int a = 0;
if (head == NULL)
return (NULL);
while (head)
{
if (a == index)
return (head);
head = head->next;
a++;
}
return (NULL);
}
