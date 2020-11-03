#include "lists.h"

/**
 *listint_len - function that returns the num of elements in a linked list
 *@h: *h pointer to elements
 *
 *Description: function that returns the num of elements in a linked list
 *section header: Section description
 *Return: returns num
 */

size_t listint_len(const listint_t *h)
{
size_t num = 0;

while (h)
{
num++;
h = h->next;
}
return (num);
}
