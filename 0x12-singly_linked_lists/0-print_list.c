#include "lists.h"

/**
 *print_list - prints all the elements of a list_t list.
 *@h: *h pointer to elements
 *
 *Description: prints all the elements of a list_t list.
 *section header: Section description
 *Return: returns num
 */

size_t print_list(const list_t *h)
{
size_t tmp = 0;

while (h)
{
if (h->str == NULL)
printf("[0] (nil)\n");

else
printf("[%u] %s\n", h->len, h->str);
tmp++;
h = h->next;
}
return (tmp);
}
