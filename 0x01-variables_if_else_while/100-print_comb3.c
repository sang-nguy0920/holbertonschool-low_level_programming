#include <stdio.h>
/**
 *main - prints prints all possible different combinations of two digits.
 *
 *Return: returns int
 */

int main(void)
{
int a;
int b;
a = 0;
while (a <= 9)
{
b = a + 1;
while (b <= 9)
{
putchar(a);
putchar(b);
if (a == 8 && b == 9)
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
