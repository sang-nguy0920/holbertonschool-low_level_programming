#include "lists.h"

/**
 *get_nodeint_at_index - function that returns the nth node of a linked list.
 *@head: *head pointer to elements
 *@index: index of node
 *
 *Description: function that returns the nth node of a linked list.
 *section header: Section description
 *Return: a certain node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int x = 0;
listint_t *tmp = head;

while (tmp && x < index)
{
tmp = tmp->next;
x++;
}
return (tmp);
}
