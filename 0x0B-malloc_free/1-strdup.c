#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strdup - function that returns a pointer to a newly allocated space in mem
 *@str: *str pointer
 *
 *Description: function that return a pointer to a newly allocated space in mem
 *section header: Section description
 *Return: returns char
 */

char *_strdup(char *str)
{
char *p;
int i;
int j;

if (str == NULL)
return (NULL);

for (j = 0 ; str[j] != '\0' ; j++)
;
p = malloc(sizeof(char) * (j + 1));

if (p == NULL)
return (NULL);

for (i = 0 ; str[i] != '\0' ; i++)
{
p[i] = str[i];
}
return (p);
}
