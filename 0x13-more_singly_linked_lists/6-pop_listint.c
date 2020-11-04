#include "lists.h"

/**
 *pop_listint - function that deletes the head node
 *@head: *head pointer to elements
 *
 *Description: function that deletes the head node
 *section header: Section description
 *Return: void
 */

int pop_listint(listint_t **head)
{
listint_t *tmp = *head;
int x;

if (tmp)
{
x = tmp->n;
*head = tmp->next;
free(tmp);
}
else
x = 0;
return (x);
}
