#include "holberton.h"

/**
 *main - prints a string
 *@parameter - none
 *
 *Description:
 *section header: Section description
 *Return: returns int
 */

int main(void)
{
char *b;

int h;
b = "Holberton";
for (h = 0; h < 9; h++)
{
_putchar(b[h]);
}
_putchar('\n');
return (0);
}
