#include<stdio.h>

/**
 *main - prints first 98 Fibonacci numbers
 *@: void
 *
 * Return: void
 */

int main(void)
{
unsigned long int fib1 = 1, fib2 = 2, fib3 = 3, num;

printf("%lu, ", fib1);
printf("%lu, ", fib2);
for (num = 3; num < 98; num++)
{
printf("%lu, ", fib3);
fib1 = fib2;
fib2 = fib3;
fib3 = fib1 + fib2;
}
printf("%lu\n", fib3);
return (0);
}
