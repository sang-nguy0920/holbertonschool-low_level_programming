#include <stdio.h>
/**
 *main - prints all the numbers of base 16 in lowercase, followed by a new line
 *
 *Return: returns int
 */

int main(void)
{
char a;
char b;

a = 48;
b = 97;

while (a <= 57)
{
putchar (a);
a++;
}
while (b <= 102)
{
putchar (b);
b++;
}
putchar ('\n');
return (0);
}
