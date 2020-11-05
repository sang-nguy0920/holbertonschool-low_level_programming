#include "holberton.h"

/**
 *binary_to_uint - function that converts a binary number to an unsigned int.
 *@b: *b pointer to string of 0 and 1 chars
 *
 *Description: function that converts a binary number to an unsigned int.
 *section header: Section description
 *Return: a converted number else 0
 */

unsigned int binary_to_uint(const char *b)
{
unsigned int x = 0, num = 0;

if (b == NULL)
return (0);

while (b[x] != '\0')
{
if (b[x] != '0' && b[x] != '1')
return (0);
num = num << 1;
if (b[x] == '1')
num = num ^ 1;
x++;
}
return (num);
}
