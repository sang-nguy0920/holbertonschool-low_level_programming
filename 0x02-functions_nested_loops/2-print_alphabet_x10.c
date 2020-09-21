#include "holberton.h"

/**
 *print_alphabet_x10 -  prints 10 times the alphabet, in lowercase
 *@void: void
 *
 *Description: Uses _putchar
 *section header: Section description
 *Return: returns void
 */
void print_alphabet_x10(void)
{
char x;
int y;
for (y = 0; y <= 10; y++)
{
for (x = 'a'; x <= 'z'; x++)
{
_putchar(x);
}
_putchar('\n');
}
}
