#include "holberton.h"
#include <stdio.h>
/**
 *print_array - function that prints n elements of an array of integers
 *@a: *a pointer
 *@n: int n
 *
 *Description: function that prints n elements of an array of integers
 *section header: Section description
 *Return: returns void
 */

void print_array(int *a, int n)
{
int i;
i = 0;
for (n--; n >= 0; n--, i++)
{
printf("%d", a[i]);
if (n > 0)
{
printf(", ");
}
}
printf("\n");
}
