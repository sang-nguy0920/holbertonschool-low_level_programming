#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *sum_them_all - function that returns the sum of all its parameters.
 *@n: const unsigned int n
 *
 *Description: function that returns the sum of all its parameters.
 *section header: Section description
 *Return: returns int
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum;

va_start(ap, n);

sum = 0;
for (i = 0; i < n; i++)
sum += va_arg(ap, int);

va_end(ap);
return (sum);
}
