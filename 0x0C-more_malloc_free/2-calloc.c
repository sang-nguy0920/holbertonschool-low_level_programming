#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_calloc - function that allocates memory for an array, using malloc.
 *@nmemb: unsigned int nmemb
 *@size: unsigned int size
 *
 *Description: function that allocates memory for an array, using malloc.
 *section header: Section description
 *Return: returns void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
char *p;
unsigned int i;

if (nmemb == 0 || size == 0)
return (NULL);

p = malloc(nmemb * size);

if (p == NULL)
return (NULL);

for (i = 0; i < (size * nmemb); i++)
p[i] = 0;

return (p);

}
