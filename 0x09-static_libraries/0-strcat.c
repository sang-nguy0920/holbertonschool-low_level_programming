#include "holberton.h"

/**
 *_strcat - function that concatenates two strings.
 *@dest: *dest pointer
 *@src: *src pointer
 *
 *Description: function that concatenates two strings.
 *section header: Section description
 *Return: returns char
 */

char *_strcat(char *dest, char *src)
{
int i, j;
for (i = 0; dest[i] != '\0'; i++)
{
;
}
for (j = 0; src[j] != '\0'; j++)
{
dest[i] = src[j];
i++;
}
return (dest);
}
