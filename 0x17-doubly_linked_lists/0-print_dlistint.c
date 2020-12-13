#include "lists.h"

/**
 *print_dlistint - function that prints all the elements of a dlistint_t list.
 *@h: *h pointer
 *
 *Description: function that prints all the elements of a dlistint_t list.
 *Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
const dlistint_t *copy = h;
size_t num;

for (num = 0; copy; num++, copy = copy->next)
printf("%d\n", copy->n);
return (num);
}
