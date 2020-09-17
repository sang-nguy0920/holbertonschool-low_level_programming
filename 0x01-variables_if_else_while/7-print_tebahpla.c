#include <stdio.h>
/**
 *main - prints alphabet in lowercase, followed by a new line in reverse
 *
 *Return: returns int
 */

int main(void)
{
char c;
c = 'z';
while (c >= 'a')
{
putchar (c);
c = c - 1;
}
putchar ('\n');

return (0);
}
