#include "holberton.h"

/**
 *print_triangle - prints a triangle, followed by a new line.
 *@n: size
 *
 *Description: prints a triangle, followed by a new line.
 *section header: Section description
 *Return: returns void
 */
void print_triangle(int n)
{
int y, z;
if (n <= 0)
_putchar('\n');
for (y = 1; y <= n; y++)
{
for (z = 1; z <= n; z++)
{
if (z <= (n - y))
_putchar(' ');
else
_putchar('#');
}
_putchar('\n');
}
}
