#include "holberton.h"

/**
 *print_last_digit -   prints the last digit of a number.
 *@r: integer
 *
 *Description:  prints the last digit of a number.
 *section header: Section description
 *Return: returns int
 */
int print_last_digit(int r)
{

int s = r % 10;
if (s < 0)
s *= -1;
_putchar(s + '0');
return (s);
}

