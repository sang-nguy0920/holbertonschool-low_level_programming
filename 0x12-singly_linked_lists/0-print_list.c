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
unsigned int x = 0;

const list_t *listtmp = h;

while (listtmp != NULL)
{
printf("[%d] %s\n", listtmp->len, listtmp->str);
listtmp = listtmp->next;
x++;
}
return (x);
}
