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
size_t x;

if (array == NULL)
return (-1);

for (x = 0; x < size; x++)
{
printf("Value checked array[%li] = [%li]\n", (long int)x, (long int)array[x]);

if (array[x] == value)
return (x);
}
return (-1);
}
