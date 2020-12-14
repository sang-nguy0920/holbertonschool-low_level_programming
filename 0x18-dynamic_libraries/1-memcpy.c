#include "holberton.h"

/**
 *_memcpy - function that copies memory area.
 *@dest: *dest pointer
 *@src: *src pointer
 *@n: unisgned int
 *
 *Description: function that copies memory area.
 *section header: Section description
 *Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
*(dest + i) = *(src + i);
}
return (dest);
}
