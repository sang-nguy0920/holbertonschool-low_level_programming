#include "holberton.h"

/**
 *print_alphabet -  prints the alphabet, in lowercase, followed by a new line.
 *@parameter - none
 *
 *Description: Uses _putchar
 *section header: Section description
 *Return: returns int
 */

void print_alphabet(void)
{
char x;

for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
