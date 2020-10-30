#include "lists.h"

/**
 *add_node -  function that adds a new node at the beginning of a list_t list
 *@head: **head pointer to elements
 *@str: *str pointer to str
 *
 *Description:  function that adds a new node at the beginning of a list_t list
 *section header: Section description
 *Return: returns address of new element
 */

list_t *add_node(list_t **head, const char *str)
{
char *x;
int num = 0;
list_t *node;

node = malloc(sizeof(list_t));

if (node == NULL)
return (NULL);

x = strdup(str);
if (x == NULL)
{
free(node);
return (NULL);
}
for (; str[num];)
num++;

node->str = x;
node->len = num;
node->next = *head;
*head = node;

return (node);
}
