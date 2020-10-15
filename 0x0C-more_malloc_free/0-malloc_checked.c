#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *malloc_checked - function that allocates memory using malloc.
 *@b: unsigned int b
 *
 *Description: function that allocates memory using malloc.
 *section header: Section description
 *Return: returns void
 */
void *malloc_checked(unsigned int b)
{
void *p;

p = malloc(b);

if (p == NULL)
exit('b');
return(p);
}
