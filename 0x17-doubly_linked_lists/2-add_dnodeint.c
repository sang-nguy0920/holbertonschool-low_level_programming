#include "lists.h"

/**
 *add_dnodeint - func that adds a new node at the beginning of a dlistint_t
 *@head: *head pointer
 *@n: int to add to linked list
 *
 *Description: func that adds a new node at the beginning of a dlistint_t
 *Return: number new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *temp = NULL, *new_node = NULL;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
temp = *head;
*head = new_node;
new_node->next = temp;
if (temp != NULL)
temp->prev = *head;
return (new_node);
}
