#include "holberton.h"

/**
 *_puts_recursion - function that prints a string.
 *@s: *s pointer
 *
 *Description: function that prints a string.
 *section header: Section description
 *Return: returns void
 */

void _puts_recursion(char *s)
{
int a;
a = 0;

if (s[a] == '\0')
{
_putchar('\n');
return;
}
_putchar(s[a]);
s++;
_puts_recursion(s);
}
