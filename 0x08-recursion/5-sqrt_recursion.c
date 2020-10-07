#include "holberton.h"

/**
 *_sqrt_recursion - function that returns the natural square root of a number.
 *@n: int n
 *
 *Description: function that returns value of x raised to the power of y.
 *section header: Section description
 *Return: returns int
 */

int _sqrt_recursion(int n)
{
int i, result;
i = 1, result = 1;

if (n == 0 || n == 1)
return (n);

if (n < 0)
return (-1);

if (n % 2 != 0 && n % 5 != 0)
return (-1);

while (result <= n)
{
i++;
result = (i *i);
}
return (i - 1);
}
