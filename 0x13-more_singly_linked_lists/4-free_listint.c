#include "lists.h"

/**
 *free_list - function that frees a list_t list.
 *@head: *head pointer to elements
 *
 *Description: function that frees a list_t list.
 *section header: Section description
 *Return: void
 */

void free_listint(listint_t *head)
{
listint_t *tmp;

while (head != NULL)
{
tmp = head;
head = head->next;
free(tmp);
}
}
