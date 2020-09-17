#include <stdio.h>
/**
 *main - prints single digit # of base 10 start from 0 using putchar
 *
 *Return: returns int
 */

int main(void)
{
int c;
c = 48;
while (c <= 57)
{
putchar (c);
c = c + 1;
}
putchar ('\n');

return (0);
}