#include<stdio.h>

/**
 *main - prints first 50 Fibonacci numbers
 *@n: number to print 50
 *
 * Return: void
 */

void main(void)
{
int fib1 = 0, fib2 = 1, fib3, num, count = 0;
num = 50;

count = 0; /* fib1 and fib2 are already used */

while (count < num)

{

fib3 = fib1 + fib2;

count++;

printf("%d, ", fib3);

fib1 = fib2;

fib2 = fib3;

}

}
