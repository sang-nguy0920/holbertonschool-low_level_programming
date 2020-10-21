#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_name - function that prints a name.
 *@name: *name pointer
 *@f: *f function pointer
 *
 *Description: function that prints a name.
 *section header: Section description
 *Return: returns void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
size_t SA;

if (array == NULL || action == NULL)
return;

for (SA = 0; SA < size; SA++)
action(array[SA]);
}
