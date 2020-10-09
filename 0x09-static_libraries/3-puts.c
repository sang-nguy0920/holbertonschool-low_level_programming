#include "holberton.h"
#include <stdio.h>

/**
 *_puts - function that prints a string, followed by a new line, to stdout
 *@str: *str pointer
 *
 *Description: function that prints a string, followed by a new line, to stdout
 *section header: Section description
 *Return: returns void
 */

void _puts(char *str)
{

int i;
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');

}
