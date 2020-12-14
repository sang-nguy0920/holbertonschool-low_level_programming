#include "lists.h"

/**
 *get_dnodeint_at_index - function that returns the nth node of a dlistint_t
 *@head: *head pointer
 *@index: nth node
 *
 *Description: function that returns the nth node of a dlistint_t
 *Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
size_t counter = 0;
while (head != NULL)
{
if (counter == index)
break;
counter++;
head = head->next;
}
return (head);
}
