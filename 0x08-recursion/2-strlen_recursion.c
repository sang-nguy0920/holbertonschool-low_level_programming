#include "holberton.h"

/**
 *strlen_recursion - function that returns the length of a string.
 *@s: *s pointer
 *
 *Description: function that returns the length of a string.
 *section header: Section description
 *Return: returns int
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (1 + _strlen_recursion(s));
}
