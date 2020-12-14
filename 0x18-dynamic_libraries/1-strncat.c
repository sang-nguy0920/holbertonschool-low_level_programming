#include "holberton.h"

/**
 *_strncat - function that concatenates two strings.
 *@dest: *dest pointer
 *@src: *src pointer
 *@n: integer
 *
 *Description: function that concatenates two strings.
 *section header: Section description
 *Return: returns char
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
;
}
j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
i++;
j++;
}
return (dest);
}
