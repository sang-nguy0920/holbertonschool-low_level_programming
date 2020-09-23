#include<stdio.h>

/**
 *main - prints first 50 Fibonacci numbers
 *@n: number to print 50
 *
 * Return: void
 */

int main(void)
{
int fib1 = 1, fib2 = 2, fib3 = 3, num;

printf("%d, ", fib1);
printf("%d, ", fib2);
for (num = 3; num < 50; num++)
{
printf("%d, ", fib3);
fib1 = fib2;
fib2 = fib3;
fib3 = fib1 + fib2;
}
printf("%d\n", fib3);
return (0);
}
