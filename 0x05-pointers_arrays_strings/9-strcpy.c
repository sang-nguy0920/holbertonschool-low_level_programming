#include "holberton.h"
#include <stdio.h>
/**
 *_strcpy - Write a function that copies the string pointed to by src
 *@dest: *dest pointer
 *@src: *src pointer
 *
 *Description: Write a function that copies the string pointed to by src
 *section header: Section description
 *Return: returns char
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}
