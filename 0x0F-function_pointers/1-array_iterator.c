#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *array_iterator - function that executes a function given as a parameter
 *@array: *array pointer
 *@size: size
 *@action: *action function pointer
 *
 *Description: function that executes a function given as a parameter
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
