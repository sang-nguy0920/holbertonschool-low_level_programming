#include "lists.h"

/**
 *add_nodeint_end - function that adds a new node at the end of a list_t list.
 *@head: **head pointer to elements
 *@str: *str pointer to str
 *
 *Description: function that adds a new node at the end of a list_t list.
 *section header: Section description
 *Return: returns address of new
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *tmp;

new = malloc(sizeof(listint_t));

if (new == NULL)
return (NULL);

tmp = (*head);

new->next = NULL;
new->n = n;

if (!*head)
{
*head = new;
return (*head);
}

while (tmp->next != NULL)
tmp = tmp->next;
tmp->next = new;
return (tmp);
}
