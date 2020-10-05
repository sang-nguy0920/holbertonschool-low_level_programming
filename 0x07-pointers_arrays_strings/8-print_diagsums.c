#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums -   function that prints the sum of the two diagonals
 *@a: *a pointer
 *@size: size
 *
 *Description:   function that prints the sum of the two diagonals
 *section header: Section description
 *Return: returns void
 */

void print_diagsums(int *a, int size)
{
int i, j, k, l, m;

for (i = 0; i < size; i++)
{
k = (i * size) + i;
l += *(a + k);
}
for (j = 0; j < size; j++)
{
k = (j * size) + (size - 1 - j);
m += *(a + k);
}
printf("%i, %i\n", l, m);
}
