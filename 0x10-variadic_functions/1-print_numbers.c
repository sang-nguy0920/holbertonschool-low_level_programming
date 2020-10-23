#include "variadic_functions.h"

/**
 *print_numbers - function that prints numbers, followed by a new line.
 *@separator: *seperator pointer
 *@n: const unsigned int
 *
 *Description: function that prints numbers, followed by a new line.
 *section header: Section description
 *Return: returns void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list arg;
unsigned int i;

va_start(arg, n);
for (i = 0; i < n; i++)
{
printf("%d", va_arg(arg, int));
if (separator != NULL)
{
if (i < n - 1)
printf("%s", separator);
}
}
putchar('\n');
va_end(arg);
}
