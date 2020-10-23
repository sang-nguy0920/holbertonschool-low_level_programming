#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum;

va_start (ap, n);

sum = 0;
for (i = 0; i < n; i++)
sum += va_arg (ap, int);

va_end (ap);
return sum;
}
