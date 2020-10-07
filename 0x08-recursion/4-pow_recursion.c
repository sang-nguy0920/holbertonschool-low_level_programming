#include "holberton.h"

/**
 *_pow_recursion - function that returns value of x raised to the power of y.
 *@x: int x
 *@y: int y
 *
 *Description: function that returns value of x raised to the power of y.
 *section header: Section description
 *Return: returns int
 */

int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
