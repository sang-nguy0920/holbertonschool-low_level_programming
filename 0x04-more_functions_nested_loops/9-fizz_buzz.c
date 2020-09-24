#include<stdio.h>

/**
 *main - numbers times 3 print Fizz times 5 Buzz.both fizzbuzz
 *@:
 *
 * Description: numbers times 3 print Fizz times 5 Buzz.both fizzbuzz
 * Return: void
 */

int main(void)
{
int a;
for (a = 1; a <= 100; a++)
{
if (a % 15 == 0)
printf("FizzBuzz");
else if (a % 3 == 0)
printf("Fizz");
else if (a % 5 == 0)
printf("Buzz");
else
printf("%i", a);
if (a < 100)
printf(" ");
}
printf("\n");
return (0);
}
