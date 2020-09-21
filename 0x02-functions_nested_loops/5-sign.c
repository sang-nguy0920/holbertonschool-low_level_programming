#include "holberton.h"

/**
 *print_sign -  prints the sign of a number.
 *@n: int n
 *
 *Description: Returns 1 and prints + if n is greater than zero
 *section header: Section description
 *Return: returns int
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
