#include "holberton.h"

/**
 *print_numbers - prints the numbers, from 0 to 9, followed by a new line.
 *@: void
 *
 *Description: prints the numbers, from 0 to 9, followed by a new line.
 *section header: Section description
 *Return: void
 */
void print_numbers(void)
{
int num;
for (num = '0'; num <= '9'; num++)
{
_putchar(num);
}
_putchar('\n');
}
