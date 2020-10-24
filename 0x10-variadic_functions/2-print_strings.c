#include "variadic_functions.h"

/**
 *print_strings - function that prints strings, followed by a new line.
 *@separator: *seperator pointer
 *@n: const unsigned int
 *
 *Description: function that prints strings, followed by a new line.
 *section header: Section description
 *Return: returns void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{

va_list arg;
unsigned int i;
char *str;

va_start(arg, n);

for (i = 0; i < n; i++)
{
str = (va_arg(arg, char *));

if (str == NULL)
printf("(nil)");

else
{
printf("%s", str);
}

if (separator != NULL)
{
if (i < n - 1)
printf("%s", separator);
}
}
putchar('\n');
va_end(arg);
}
