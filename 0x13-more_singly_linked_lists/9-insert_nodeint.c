#include "lists.h"

/**
 *insert_nodeint_at_index - function that inserts a new node at a given pos.
 *@head: *head pointer to elements
 *@idx: index of list where new node is added
 *@n: n element
 *
 *Description: function that inserts a new node at a given pos.
 *section header: Section description
 *Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *new, *tmp = *head;
unsigned int x = 0;

while (tmp && x < idx - 1)
{
tmp = tmp->next;
x++;
}
if (tmp || (x == idx - 1 || idx == 0))
{
new = malloc(sizeof(listint_t));

if (new)
{
new->n = n;

if (idx == 0)
{
new->next = *head;
*head = new;
}
else
{
new->next = tmp->next;
tmp->next = new;
}
return (new);
}
}
return (NULL);
}
