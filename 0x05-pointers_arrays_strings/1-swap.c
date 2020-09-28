#include "holberton.h"
#include <stdio.h>

/**
 *swap_int - swaps the values of two integers.
 *@a: *a pointer
 *@b: *b pointer
 *
 *Description: swaps the values of two integers.
 *section header: Section description
 *Return: returns void
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
