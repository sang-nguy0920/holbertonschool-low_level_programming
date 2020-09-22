#include "holberton.h"

/**
 *jack_bauer -   prints every minute starting from 00:00 to 23:59.
 *@: void
 *
 *Description:  prints every minute starting from 00:00 to 23:59.
 *section header: Section description
 *Return: returns void
 */

void jack_bauer(void)
{
char x;
char y;

for (x = 0; x <= 23; x++)
{
for (y = 0; y <= 59; y++)
{
_putchar(x / 10 % 10 + '0');
_putchar(x % 10 + '0');
_putchar(':');
_putchar(y / 10 % 10 + '0');
_putchar(y % 10 + '0');
if (x == 23 && y == 59)
{
_putchar('\n');
}
else
{
_putchar('\n');
}
}
}
}
