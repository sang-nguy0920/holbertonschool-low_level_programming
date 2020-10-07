#include "holberton.h"

/**
 *factorial -  function that returns the factorial of a given number.
 *@n: int n
 *
 *Description:  function that returns the factorial of a given number.
 *section header: Section description
 *Return: returns int
 */

int factorial(int n)
{
if (n < 2 && n > 0)
return (1);
else if (n < 0)
return (-1);
else if (n > 1)
return n * factorial(n - 1);
else
return (0);
}
