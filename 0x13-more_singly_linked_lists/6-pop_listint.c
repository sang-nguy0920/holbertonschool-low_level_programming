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
listint_t *node;

node = malloc(sizeof(listint_t));

if (node == NULL)
return (NULL);

node->next = *head;
*head = node;

return (node);
}