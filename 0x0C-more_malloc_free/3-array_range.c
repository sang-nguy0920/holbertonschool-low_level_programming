#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_range - function that creates an array of integers.
 *@min: int min
 *@max: int max
 *
 *Description: function that creates an array of integers.
 *section header: Section description
 *Return: returns int
 */

int *array_range(int min, int max)
{
int *p;
int i;

if (min > max)
return (NULL);

p = malloc(sizeof(int) * (max - min + 1));

if (p == NULL)
return (NULL);

for (i = 0; min <= max; i++)
{
p[i] = min;
min++;
}

return (p);
}
