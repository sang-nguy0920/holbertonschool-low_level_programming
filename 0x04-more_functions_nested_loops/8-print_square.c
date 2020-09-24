#include "holberton.h"

/**
 *print_square - a function that prints a square, followed by a new line.
 *@n: size
 *
 *Description: a function that prints a square, followed by a new line.
 *section header: Section description
 *Return: returns void
 */
void print_square(int n)
{
int y, z;
for (y = 0; y < n; y++)
{
for (z = 0; z < y; z++)
{
if (n <= 0)
{
_putchar('\n');
}
_putchar('\n');
}
_putchar('#');
_putchar('\n');
}
}
