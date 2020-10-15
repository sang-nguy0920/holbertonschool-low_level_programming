#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_realloc - function that reallocates a memory block using malloc and free
 *@ptr: *ptr pointer
 *@old_size: unsigned int old size
 *@new_size: unsigned int new size
 *
 *Description: function that reallocates a memory block using malloc and free
 *section header: Section description
 *Return: returns void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

char *spc;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
{
spc = malloc(new_size);

if (spc == NULL)
return (NULL);
return (spc);
}

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

spc = malloc(new_size);

if (spc == NULL)
return (NULL);

for (i = 0; i < old_size && i < new_size; i++)
spc[i] = ((char *)ptr)[i];
free(ptr);
return (spc);
}
