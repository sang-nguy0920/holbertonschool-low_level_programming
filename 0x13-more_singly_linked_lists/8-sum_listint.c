#include "lists.h"

/**
 *sum_listint - function that returns the sum of (n) of a linked list.
 *@head: *head pointer to elements
 *
 *Description: function that returns the sum of (n) of a linked list.
 *section header: Section description
 *Return: sum of n
 */

int sum_listint(listint_t *head)
{
int sum = 0;

while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
