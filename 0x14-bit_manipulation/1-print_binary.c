#include "holberton.h"

/**
 *print_binary - function that prints the binary representation of a number.
 *@n: number
 *
 *Description: function that prints the binary representation of a number.
 *section header: Section description
 *Return: void
 */

void print_binary(unsigned long int n)
{
int bin, size, i, zero = 0;

if (n == 0)
{
_putchar('0');
return;
}
size = sizeof(n) * 8 - 1;
for (i = size; i >= 0; i--)
{
bin = n >> i;
if (bin & 1)
{
_putchar('1');
zero = 1;
}
else if (zero == 1)
_putchar('0');
}
}
