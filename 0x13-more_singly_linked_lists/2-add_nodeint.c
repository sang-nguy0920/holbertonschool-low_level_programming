#include "lists.h"

/**
 *add_nodeint -  function that adds a new node at the beginning of a list
 *@head: **head pointer to elements
 *@n: const int
 *
 *Description:  function that adds a new node at the beginning of a list
 *section header: Section description
 *Return: returns address of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{

listint_t *node;

node = malloc(sizeof(listint_t));

if (node == NULL)
return (NULL);

node->n = n;
node->next = *head;
*head = node;

return (node);
}
