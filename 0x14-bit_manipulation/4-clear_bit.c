#include "holberton.h"

/**
 *clear_bit - function that sets the value of a bit to 0 at a given index.
 *@n: *n pointer numbers
 *@index: index
 *
 *Description: function that sets the value of a bit to 0 at a given index.
 *section header: Section description
 *Return: 1 for works, -1 if error
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int num = 1;

if (index > (sizeof(unsigned long int) * 8))
return (-1);

num = num << index;
*n = *n & ~num;
return (1);
}
