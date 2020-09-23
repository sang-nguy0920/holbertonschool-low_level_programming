#include<stdio.h>

/**
 *main -  prints the first 98 Fibonacci numbers
 *@:
 *
 * Return: void
 */
int main(void)
{
long int fib1 = 1, fib2 = 2, fib3 = 3, num;

printf("%ld, ", fib1);
printf("%ld, ", fib2);
for (num = 3; num < 98; num++)
{
printf("%ld, ", fib3);
fib1 = fib2;
fib2 = fib3;
fib3 = fib1 + fib2;
}
printf("%ld\n", fib3);
return (0);
}