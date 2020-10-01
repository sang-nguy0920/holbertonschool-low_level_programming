#include "holberton.h"

/**
 *_strcmp - function that compares two strings.
 *@s1: *s1 pointer
 *@s2: *s2 pointer
 *
 *Description: function that compares two strings.
 *section header: Section description
 *Return: returns int
 */

int _strcmp(char *s1, char *s2)
{
int i;
for (i = 0; s1[i] != '\0'; i++)
{
;
}
for (i = 0; s2[i] != '\0'; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (0);
}
