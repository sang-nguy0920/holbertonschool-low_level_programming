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
i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
_putchar('\n');
}
