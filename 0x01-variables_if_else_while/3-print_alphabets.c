#include <stdio.h>
/**
 *main - prints alphabet in lowercase and uppercase, followed by a new line
 *
 *Return: returns int
 */

int main(void)
{
char c;
char C;

c = 'a';
C = 'A';

while (c <= 'z')
{
putchar (c);
c++;
}
while (C <= 'Z')
{
putchar (C);
C++;
}
putchar ('\n');
return (0);
}
