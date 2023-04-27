#include "lists.h"
#include <string.h>
/**
 * add_node - function that adds a new node
 * at the beginning of a list_t list.
 * @head: pointer to the list_t pointer
 * @str: pointer to string that adds as node
 * Return: pointer to new head of list,
 * NULL on failure
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
int length = 0;
temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);
while (str[length])
length++;
temp->len = length;
temp->str = strdup(str);
temp->next = *head;
*head = temp;
return (temp);
}
