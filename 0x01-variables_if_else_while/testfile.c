#include <stdio.h>
/**
 *main - prints prints all possible different combinations of two digits.
 *
 *Return: returns int
 */

int main(void)
{
int a, b;
for (a = '0'; a <= '9'; a++)
{
for (b = a + 1; b <= '9'; b++)
{
putchar(a);
putchar(b);
if (a == '8' && b == '9')
{
putchar('\n');
}
else
{
putchar(',');
putchar(' ');
}
}
}
return (0);
}
