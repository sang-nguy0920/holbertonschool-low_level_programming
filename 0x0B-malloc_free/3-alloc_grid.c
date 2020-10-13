#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *alloc_grid - function that returns a ptr to a 2 dimen array of ints.
 *@width: in width
 *@height: int height
 *
 *Description: function that returns a ptr to a 2 dimen array of ints.
 *section header: Section description
 *Return: returns int
 */

int **alloc_grid(int width, int height)
{
int **p;
int i, x, y;

if (width <= 0 || height <= 0)
return (NULL);

p = malloc(height * sizeof(int));

if (p == NULL)
{
free(p);
return (0);
}

for (i = 0; i < height; i++)
{
p[i] = malloc(width * sizeof(int));
if (p[i] == NULL)
{
for (; i >= 0; i--)
free(p[i]);
free(p);
return (0);
}
}

for (x = 0; x < height; x++)
{
for (y = 0; y < width; y++)
{
p[x][y] = 0;
}
}
return (p);
}
