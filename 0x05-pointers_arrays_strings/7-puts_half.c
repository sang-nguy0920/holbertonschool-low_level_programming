#include "holberton.h"

/**
 *puts_half - function that prints half of a string 
 *@str: *str pointer
 *
 *Description: function that prints half of a string 
 *section header: Section description
 *Return: returns void
 */
void puts_half(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i += 2)
_putchar(str[i]);
_putchar('\n');

}