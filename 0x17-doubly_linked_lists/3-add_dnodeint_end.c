#include "lists.h"

/**
 *add_dnodeint_end - func that adds a new node at the end of a dlistint_t
 *@head: *head pointer
 *@n: int to add to linked list
 *
 *Description: func that adds a new node at the end of a dlistint_t
 *Return: address of new element or NULL
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *temp, *new_node;
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->next = NULL;
temp = *head;
if (*head == NULL)
{
*head = new_node;
new_node->prev = NULL;
return (new_node);
}
while (temp->next != NULL)
{
temp = temp->next;
}
temp->next = new_node;
new_node->prev = temp;
return (new_node);
}
