#include "holberton.h"
#include <stdio.h>

/**
 *_abs -  computes absolute value of an integer.
 *@r: integer
 *
 *Description: computes absolute value of an integer.
 *section header: Section description
 *Return: returns int
 */
int _abs(int r)
{
if (r < 0)
{
return (-r);
}
else
{
return (r);
}
}
