#include "function_pointers.h"

/**
 *int_index - function that searches for an integer.
 *@array: *array pointer
 *@size: size
 *@cmp: *cmp function pointer
 *
 *Description: function that searches for an integer.
 *section header: Section description
 *Return: returns int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
int inc1;

if (array == NULL || cmp == NULL || size <= 0)
return (-1);

for (inc1 = 0; size > inc1; inc1++)
{
if (cmp(array[inc1]) != 0)
return (inc1);
}
return (-1);
}
