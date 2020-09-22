#include "holberton.h"

/**
 *add -   adds two integers and returns the result.
 *@a: int 1
 *@b: int 2
 *Description:  adds two integers and returns the result.
 *section header: Section description
 *Return: int
 */
int add(int a, int b)
{
char c = a + b;
if (a + b == c)
_putchar(c % 10);
return (c);
}
