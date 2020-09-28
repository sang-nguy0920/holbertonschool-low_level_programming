#include "holberton.h"
#include <stdio.h>

/**
 *_strlen - function that returns the length of a string.
 *@s: *s pointer
 *
 *Description: function that returns the length of a string.
 *section header: Section description
 *Return: returns int (string length)
 */

void _puts(char *str)
{

int i;
for (i = 0; str[i] != '\0'; i++)
_putchar(str[i]);
_putchar('\n');

}