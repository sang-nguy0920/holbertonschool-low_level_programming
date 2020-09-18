#include <stdio.h>
/**
 *main - prints prints all possible different combinations of three digits.
 *
 *Return: returns int
 */

int main(void)
{
int a;
int b;
int c;
a = '0';

while (a <= '7')
{
b = a + 1;
while (b <= '8')
{
c = b + 1;
while (c <= '9')
{
putchar(a);
putchar(b);
putchar(c);
if (a == '7' && b == '8' && c == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
c = c + 1;
}
b = b + 1;
}
a = a + 1;
}
return (0);
}
