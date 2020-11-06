#include "holberton.h"

/**
 *flip_bits - function that returns the number of bits you would need to flip.
 *@n: number
 *@m: other number
 *
 *Description: function that returns the number of bits you would need to flip.
 *section header: Section description
 *Return: count of bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count, size;

size = sizeof(unsigned long int) * 8;

count = 0;

while (size != 0)
{
if ((n & 1) != (m & 1))
count++;
n = n >> 1;
m = m >> 1;
size--;
}
return (count);
}
