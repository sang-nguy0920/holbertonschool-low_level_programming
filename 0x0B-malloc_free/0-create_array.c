#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function creates an array of chars
 *@size: size of array
 *@c: char c
 *
 *Description: function creates an array of chars
 *section header: Section description
 *Return: returns char
 */

char *create_array(unsigned int size, char c)
{
unsigned int i;
char *p;

i = 0;

if (size == 0)
return (NULL);

p = malloc(sizeof(char) * size);
if (p == NULL)
return (NULL);

while (i < size)
{
*(p + i) = c;
i++;

}
return (p);
}
