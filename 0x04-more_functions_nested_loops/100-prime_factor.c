#include<stdio.h>

/**
 *main - prints largest prime factor on 612852475143
 *@: void
 *
 * Return: void
 */

int main(void)
{
long int a, n;
n = 612852475143;
for (a = 3; a < n; a += 2)
{
if ((n % a == 0) && (n != a))
n = (n / a);
}
printf("%ld\n", n);
return (0);
}
