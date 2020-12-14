#include "lists.h"

/**
 *free_dlistint - function that frees a dlistint_t list.
 *@head: *head pointer
 *
 *Description: function that frees a dlistint_t list.
 *Return: nada
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;
while (head)
{
temp = head;
head = head->next;
free(temp);
}
}
