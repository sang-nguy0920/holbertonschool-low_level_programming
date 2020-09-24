#include "holberton.h"

/**
 *print_diagonal - a function that draws a diagonal line on the terminal.
 *@n: num of times char _ is printed
 *
 *Description: a function that draws a diagonal line on the terminal.
 *section header: Section description
 *Return: returns void
 */
void print_diagonal(int n)
{
int y, z;
if (n <= '0')
for (y = 0; y < n; y++)
{
for (z = 0; z < y; z++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
_putchar('\n');
}
