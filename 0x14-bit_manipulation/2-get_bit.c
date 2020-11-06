#include "holberton.h"

/**
 *get_bit - function that returns the value of a bit at a given index.
 *@n: numbers
 *@index: index
 *
 *Description: function that returns the value of a bit at a given index.
 *section header: Section description
 *Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
unsigned int res;

if (index > sizeof(n) * 8 - 1)
return (-1);

res = (n >> index) & 1;

if (res != 0 && res != 1)
return (-1);

return (res);
}
