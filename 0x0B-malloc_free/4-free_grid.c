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

void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}
free(grid);
}
