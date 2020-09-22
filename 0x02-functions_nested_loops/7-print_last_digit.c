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
int s,t;

s = r % 10;
if (s < 0)
s = -s;
t = '0' + s;
_putchar(t);
return (s);
}

