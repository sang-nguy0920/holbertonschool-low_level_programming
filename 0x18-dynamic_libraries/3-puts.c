#include "holberton.h"
#include <stdio.h>

/**
 *_puts - function that prints a string, followed by a new line, to stdout
 *@s: *str pointer
 *
 *Description: function that prints a string, followed by a new line, to stdout
 *section header: Section description
 *Return: returns void
 */

void _puts(char *s)
{

int i;
for (i = 0; s[i] != '\0'; i++)
_putchar(s[i]);
_putchar('\n');
}
