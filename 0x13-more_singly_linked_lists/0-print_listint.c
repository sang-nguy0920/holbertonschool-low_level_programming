#include "lists.h"

/**
 *print_listint - function that prints all the elements of a listint_t list.
 *@h: *h pointer to elements
 *
 *Description: function that prints all the elements of a listint_t list.
 *section header: Section description
 *Return: returns num
 */

size_t print_listint(const listint_t *h)
{
size_t num = 0;

while (h)
{
printf("%d\n", h->n);
num++;
h = h->next;
}
return (num);
}
