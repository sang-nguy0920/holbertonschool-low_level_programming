#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of ints
 * @array: pointer to the first element
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 */
int linear_search(int *array, size_t size, int value)
{
size_t x = 0;

if (array == NULL)
return (-1);

while (x < size)
{
printf("Value checked array[%lu] = [%d]\n", x,
array[x]);

if (array[x] == value)
return (x);
x++;
}

return (-1);
}
