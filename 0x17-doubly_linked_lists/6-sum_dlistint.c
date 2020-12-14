#include "lists.h"

/**
 *sum_dlistint - function that returns the sum of all data(n) dlistint_t
 *@head: *head pointer
 *
 *Description: function that returns the sum of all data(n) dlistint_t
 *Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;
if (head == NULL)
return (0);
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
