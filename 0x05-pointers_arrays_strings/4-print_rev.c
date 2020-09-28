#include "holberton.h"

/**
 *print_rev - function that prints a string, in reverse
 *@s: *s pointer
 *
 *Description: function that prints a string, in reverse
 *section header: Section description
 *Return: returns void
 */

void print_rev(char *s)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
;
}
for (i--; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
