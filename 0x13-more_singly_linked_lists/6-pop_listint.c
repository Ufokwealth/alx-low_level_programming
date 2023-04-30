#include "lists.h"
/**
 * pop_listint - function that deletes the head
 * of a node of a list and returns the head node's data n.
 * @head: pointer to linstint_t structure.
 * Return: the head nodes from data
 */
pop_listint(listint_t **head)
{
listint_t *new_node;
int n;
if (*head == NULL)
return (0);
n = (*head)->next;
free(*head);
*head = new_node;
return (n);
}
