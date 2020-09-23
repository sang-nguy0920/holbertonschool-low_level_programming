#include<stdio.h>

/**
 *main - finds and prints the sum of the even-valued terms
 *@:
 *
 * Return: void
 */
int main(void)
{
long int fib1 = 1, fib2 = 2, fib3 = 0, num = 2;

for (; fib1 <= 4000000 && fib2 <= 4000000;)
{
fib3 = fib1 + fib2;
if (fib3 % 2 == 0)
{
num = num + fib3;
}
fib1 = fib2;
fib2 = fib3;
}
printf("%ld", num);
putchar('\n');
return (0);
}
