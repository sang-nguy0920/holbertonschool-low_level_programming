#include <stdio.h>
/**
 *main - prints alphabet in lowercase, followed by a new line
 *
 *Return: returns int
 */

int main(void)
{
char c;
c = 'a';
while (c <= 'z')
{
putchar (c);
c = c + 1;
}
putchar ('\n');

return (0);
}
