#include "holberton.h"

/**
 *print_line - a function that draws a straight line in the terminal.
 *@n: num of times char _ is printed
 *
 *Description: a function that draws a straight line in the terminal.
 *section header: Section description
 *Return: returns void
 */
void print_line(int n)
{
int y;

for (y = 0; y < n; y++)
{
_putchar('_');
}
_putchar('\n');
}
