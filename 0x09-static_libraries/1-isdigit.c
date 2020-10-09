#include "holberton.h"

/**
 *_isdigit - checks for a digit (0 through 9).
 *@c: if digit then returns c
 *@:
 *Description: checks for a digit (0 through 9).
 *section header: Section description
 *Return: 1 if c is a digit, otherwise 0.
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
{
return (1);
}
else
{
return (0);
}
}
