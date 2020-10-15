#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - length of a given string
 *
 *
 * @s: *s pointer
 * Return: returns int
 */
int _strlen(char *s)
{
int i;

i = 0;
while (s[i] != '\0')
i++;

return (i);
}

/**
 *string_nconcat - function that concatenates two strings.
 *@s1: *s1 pointer
 *@s2: *s2 pointer
 *@n: unsigned int n
 *
 *Description: function that concatenates two strings.
 *section header: Section description
 *Return: returns char
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *new;

unsigned int x, y;

if (s1 == NULL)
s1 = "";

if (s2 == NULL)
s2 = "";

if ((int) n > _strlen(s2))
n = _strlen(s2);

new = malloc(_strlen(s1) + n + 1);

if (new == NULL)
return (NULL);

for (x = 0, y = 0; s1[x] != '\0'; x++, y++)
new[y] = s1[x];

for (x = 0; x != n; x++, y++)
new[y] = s2[x];
new[y] = '\0';

return (new);
}
