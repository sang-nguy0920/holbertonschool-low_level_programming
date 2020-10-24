#include "variadic_functions.h"

/**
 *print_all -  function that prints anything.
 *@format: *format const pointer
 *
 *Description:  function that prints anything.
 *section header: Section description
 *Return: returns void
 */

void print_all(const char * const format, ...)
{
va_list arg;

unsigned int x = 0;

while (format)
{
va_start(arg, format);
while (format[x] != '\0')
{
switch (format[x])
{
case 'c':
printf("%c", va_arg(arg, int));
break;

case 'i':
printf("%d", va_arg(arg, int));
break;

case 'f':
printf("%f", va_arg(arg, double));
break;

case 's':
printf("%s", va_arg(arg, char *));
break;

default:
break;
}
x++;
}
va_end(arg);
break;
}
printf("\n");
}
