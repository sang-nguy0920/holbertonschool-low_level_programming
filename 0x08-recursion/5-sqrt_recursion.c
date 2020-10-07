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
if (n == 0 )
return (0);

else if (n == 0)
return (1);

else if (n < 0)
return (-1);

else
return (conditional(n, 1));
}

/**
 *conditional - function defines condition
 *@n: int n
 *@i: int i
 *
 *Description: function defines condition
 *section header: Section description
 *Return: returns int
 */

int conditional( int n, int i)
{
if (n == (i * i))
return (i);

else if (n > (i * i))
return (conditional(n, i + 1));

else
return (-1);
}
