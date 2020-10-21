#include "function_pointers.h"

/**
 *print_name - function that prints a name.
 *@name: *name pointer
 *@f: *f function pointer
 *
 *Description: function that prints a name.
 *section header: Section description
 *Return: returns void
 */

void print_name(char *name, void (*f)(char *))
{
if (f == NULL || name == NULL)
return;
f(name);
}
