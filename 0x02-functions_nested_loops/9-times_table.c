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
int x, y;
for ( x = 0; x <= 9; x++)
{
    for ( y = x + 1; y <= 9; y++)
    {
    _putchar((x * y) + '0');
    _putchar(',');
    _putchar(' ');
    }
_putchar('\n');
}
}
