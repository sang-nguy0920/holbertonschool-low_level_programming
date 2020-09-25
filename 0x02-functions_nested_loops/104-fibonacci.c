#include<stdio.h>

/**
 *main - prints first 98 Fibonacci numbers
 *@: void
 *
 * Return: void
 */

int main(void)
{
unsigned long int a1 = 1, b1 = 2, c1, a2, b2, c2, num;

printf("%lu, ", a1);
printf("%lu, ", b1);
c1 = a1 + b1;
for (num = 3; num < 90; num++)
{
printf("%lu, ", c1);
a1 = b1;
b1 = c1;
c1 = a1 + b1;
}
a2 = a1 / 1,000,000,000;
a1 = a1 % 1,000,000,000;
b2 = b1 / 1,000,000,000;
b1 = b1 % 1,000,000,000;
c2 = c1 / 1,000,000,000;
c1 = c1 % 1,000,000,000;
for (; num < 98; num++)
{
printf("%lu%lu, ", c2, c1);
a1 = b1;
a2 = b2;
b1 = c1;
b2 = c2;
c1 = a1 + b1;
c2 = a2 + b2 + (c1 / 1000000000);
c1 = c1 % 1000000000;
}
printf("%lu%lu\n", c2, c1);
return (0);
}
