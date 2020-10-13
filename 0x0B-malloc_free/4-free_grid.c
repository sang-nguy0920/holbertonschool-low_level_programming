#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid-  function that frees a 2 dimensional grid.
 *@grid: **double pointer to grid
 *@height: int height
 *
 *Description:  function that frees a 2 dimensional grid.
 *section header: Section description
 *Return: returns void
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
