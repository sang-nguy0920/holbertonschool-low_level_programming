#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *str_concat - function that concatenates two strings.
 *@s1: *s1 pointer
 *@s2: *s2 pointer
 *
 *Description: function that concatenates two strings.
 *section header: Section description
 *Return: returns char
 */

char *str_concat(char *s1, char *s2)
{
int i = 0, j = 0, size = 0;
char *p;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

while (s1[i])
i++;

while (s2[j])
j++;

size = i + j;

p = malloc(sizeof(char) * (size + 1));

if (p == 0)
return (NULL);

for (i = 0; i < size - j; i++)
p[i] = s1[i];

for (j = 0; i <= size; j++, i++)
p[i] = s2[j];

p[i + 1] = '\0';
return (p);
}
