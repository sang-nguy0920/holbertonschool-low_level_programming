#include "holberton.h"

/**
 *is_prime_number -  function that returns 1 if the input integer is prime
 *@n: int n
 *
 *Description: function that returns 1 if the input integer is prime
 *section header: Section description
 *Return: returns int
 */

int is_prime_number(int n)
{
return (extra(n, 2, n / 2));
}

/**
 *extra - checks
 *@n: int n
 *@i: int i
 *@max: int max
 *
 *Description: checks
 *section header: Section description
 *Return: returns int
 */

int extra(int n, int i, int max)
{
if ((n % i == 0 && i <= max) || n < 0 || n == 1)
return (0);

else if (n % i != 0 && i <= max)
return (extra(n, i + 1, max));

else
return (1);
}
