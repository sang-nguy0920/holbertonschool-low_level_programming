#include "holberton.h"

/**
 *_strcmp - function that reverses the content of an array of integers.
 *@a: *a pointer
 *@n: integer
 *
 *Description: function that reverses the content of an array of integers.
 *section header: Section description
 *Return: returns void
 */

void reverse_array(int *a, int n)
{
int i, tmp;

for (n -= 1, i = 0; i <= n; i++, n--)
{
tmp = a[i];
a[i] = a[n];
a[n] = tmp;
}
}
