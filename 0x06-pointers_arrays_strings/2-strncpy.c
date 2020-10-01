#include "holberton.h"

/**
 *_strncpy - function that copies a string.
 *@dest: *dest pointer
 *@src: *src pointer
 *@n: integer
 *
 *Description: function that copies a string.
 *section header: Section description
 *Return: returns char
 */

char *_strncpy(char *dest, char *src, int n)
{
int i, j;

i = 0;
j = 0;
while (i != n)
{
dest[j] = src[i];
if (src[i] == '\0')
{
dest[j] = '\0';
break;
}
j++;
i++;
}
while (j != n)
dest[j++] = '\0';
return (dest);
}
