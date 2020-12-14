#include "holberton.h"
#include <stdio.h>

/**
 *_abs -  computes absolute value of an integer.
 *@n: integer
 *
 *Description: computes absolute value of an integer.
 *section header: Section description
 *Return: returns int
 */
int _abs(int n)
{
if (n < 0)
{
return (-n);
}
else
{
return (n);
}
}
