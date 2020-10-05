#include "holberton.h"

/**
 *_memset - function that fills memory with a constant byte.
 *@s: *s pointer
 *@b: char
 *@n: unisgned int
 *
 *Description: function that fills memory with a constant byte.
 *section header: Section description
 *Return: returns char s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i=0; i < n; i++)
{
*(s + i) = b;
}
return (s);
}
