#include "holberton.h"

/**
 *more_numbers - prints 10 times the numbers, from 0 to 14
 *@void: void
 *
 *Description: prints 10 times the numbers, from 0 to 14
 *section header: Section description
 *Return: returns void
 */
void more_numbers(void)
{
int x;
int y;
for (y = 0; y <= 9; y++)
{
for (x = 0; x <= 14; x++)
{
if (x > 9)
_putchar((x / 10) + '0');
_putchar((x % 10) + '0');
}
_putchar('\n');
}
}
