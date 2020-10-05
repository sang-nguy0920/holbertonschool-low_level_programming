#include "holberton.h"

/**
 *_strchr - function that locates a character in a string.
 *@s: *s pointer
 *@c: char c
 *
 *Description: function that locates a character in a string.
 *section header: Section description
 *Return: returns c
 */

char *_strchr(char *s, char c)
{
int i;

for (i = 0; *(s + i); i++)
{
if (*(s + i) == c)
return (s + i);
}
return (0);
}
