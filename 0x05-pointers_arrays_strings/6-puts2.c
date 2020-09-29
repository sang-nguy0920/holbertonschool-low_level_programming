#include "holberton.h"

/**
 *puts2 - prints every other character of a string
 *@str: *str pointer
 *
 *Description: prints every other character of a string
 *section header: Section description
 *Return: returns void
 */

void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
_putchar(str[i]);
_putchar('\n');

}
