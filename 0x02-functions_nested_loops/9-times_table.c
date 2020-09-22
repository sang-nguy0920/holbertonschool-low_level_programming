#include "holberton.h"

/**
 *times_table -   prints the 9 times table, starting with 0.
 *@: void
 *
 *Description:  prints the 9 times table, starting with 0.
 *section header: Section description
 *Return: returns void
 */
void times_table(void)
{
int x, y, z;

for (x = 0; x <= 9; x++)
{
for (y = 0; y <= 9; y++)
{
z = x * y;
if (y == 9 && z >= 10)
{
_putchar(z / 10 % 10 + '0');
_putchar(z  % 10 + '0');
}
else if (z >= 10)
{
_putchar(z / 10 % 10 + '0');
_putchar(z  % 10 + '0');
_putchar(',');
_putchar(' ');
}
else if (y == 9)
{
_putchar(' ');
_putchar((z % 10) + '0');
}
else
{
_putchar(' ');
_putchar(z % 10 + '0');
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
}
