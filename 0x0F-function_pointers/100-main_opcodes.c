#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *op - program that prints the opcodes of its own main function.
 *@a: *a pointer
 *@n: int n
 *
 *Description: program that prints the opcodes of its own main function.
 *section header: Section description
 *Return: returns void
 */

void op(char *a, int n)
{
int inc1;
for (inc1 = 0; inc1 < n; inc1++)
{
printf("%.2hhx", a[inc1]);
if (inc1 < n - 1)
printf(" ");
}
printf("\n");
}

/**
 *main - outputs opcodes
 *@argc: int argc
 *@argv: argv double pointer
 *
 *Description: output op codes
 *section header: Section description
 *Return: returns int
 */

int main(int argc, char **argv)
{
int a;

if (argc != 2)
{
printf("Error\n");
exit(1);
}

a = atoi(argv[1]);
if (a < 0)
{
printf("Error\n");
exit(2);
}

op((char *)&main, a);
return (0);
}
