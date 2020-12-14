#include "lists.h"

/**
 *dlistint_len - func that returns the num of elements in a linked dlistint_t
 *@h: *h pointer
 *
 *Description: func that returns the num of elements in a linked dlistint_t
 *Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t num = 0;
while (h != NULL)
{
h = h->next;
num++;
}
return (num);
}
