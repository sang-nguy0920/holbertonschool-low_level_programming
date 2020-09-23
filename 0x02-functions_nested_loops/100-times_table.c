#include "holberton.h"

/**
 *space - print spaces
 *@s: number spaces to print
 *
 * Return: void
 */
void space(int s)
{
int t;
_putchar(',');
for (t = 0; t < s; t++)
{
_putchar(' ');
}
}
/**
 *print_times_table -   prints the n times table, starting with 0 - 15.
 *@n: int
 *
 *Description:  prints the n times table, starting with 0 - 15.
 *section header: Section description
 *Return: returns int
 */
void print_times_table(int n)
{
int a, b;
int c = 0;

if (n > 15 || n < 0)
{
return;
}
for (a = 0; a <= n; a++)
{
for (b = 0; b <= n; b++)
{
if (b > 0)
{
c = a * b;
if (c < 10)
{
space(3);
_putchar(c + '0');
}
else if (c < 100)
{
space(2);
_putchar((c / 10) + '0');
_putchar((c % 10) + '0');
}
else
{
space(1);
_putchar((c / 100) + '0');
_putchar(((c / 10) % 10) + '0');
_putchar((c % 10) + '0');
}
}
else
{
_putchar('0');
}
}
_putchar('\n');
}
}
