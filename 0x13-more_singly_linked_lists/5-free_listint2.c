#include "lists.h"

/**
 *free_listint2 - function that frees a listint_t list.
 *@head: *head pointer to elements
 *
 *Description: function that frees a listint_t list.
 *section header: Section description
 *Return: void
 */

void free_listint2(listint_t **head)
{
listint_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
