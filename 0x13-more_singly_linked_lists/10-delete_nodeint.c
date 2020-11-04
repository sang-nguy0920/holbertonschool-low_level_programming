#include "lists.h"

/**
 *delete_nodeint_at_index - function that deletes the node at index index.
 *@head: *head pointer to elements
 *@index: index of node to delete
 *
 *Description: function that deletes the node at index index.
 *section header: Section description
 *Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *indx_n, *tmp = *head;
unsigned int x = 0;

if (tmp && (index == 0))
{
*head = tmp->next;
free(tmp);
return (1);
}
while (tmp)
{
if (x + 1 == index)
{
indx_n = tmp->next;
if (indx_n)
{
tmp->next = indx_n->next;
free(indx_n);
return (1);
}
}
tmp = tmp->next;
x++;
}
return (-1);
}
