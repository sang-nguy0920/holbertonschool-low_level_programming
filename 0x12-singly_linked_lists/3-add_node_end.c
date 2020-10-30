#include "lists.h"

/**
 *_strlen -  returns string len
 *@s: *s str length
 *
 *Description:  returns string len
 *section header: Section description
 *Return: returns length
 */

int _strlen(const char *s)
{
unsigned int len = 0;

while (s[len] != '\0')
len++;
return (len);
}

/**
 *add_node_end - function that adds a new node at the end of a list_t list.
 *@head: **head pointer to elements
 *@str: *str pointer to str
 *
 *Description: function that adds a new node at the end of a list_t list.
 *section header: Section description
 *Return: returns address of new
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tmp;

new = malloc(sizeof(list_t));

if (new == NULL)
return (NULL);

new->str = strdup(str);
new->len = _strlen(str);
new->next = NULL;

if (!*head)
*head = new;

else
{
tmp = *head;
while (tmp->next)
tmp = tmp->next;
tmp->next = new;
}
return (new);
}
