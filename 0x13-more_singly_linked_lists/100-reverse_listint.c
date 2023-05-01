#include "lists.h"
/**
 * reverse_listint - function that reverses linked list
 * @head: pointer to listint_t structure
 * Return: pointer to the reverse list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *prev = NULL, *next;
if (*head == NULL)
return (NULL);
while (*head)
{
next = (*head)->next;
(*head)->next = prev;
prev = *head;
*head = next;
}
*head = prev;
return (*head);
}
