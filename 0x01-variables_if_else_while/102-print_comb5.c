#include <stdio.h>
/**
 *main - prints prints all possible combinations of two two-digit numbers.
 *
 *Return: returns int
 */

int main(void)
{
char a;
char b;

a = 0;

while (a <= 98)
{
b = a + 1;
while (b <= 99)
{
putchar(a);
putchar(' ');
putchar(b);
if (a == 98 && b == 99)
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
b = b + 1;
}
a = a + 1;
}
return (0);
}
