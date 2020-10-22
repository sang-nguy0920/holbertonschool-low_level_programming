#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *main - contain your main function only.
 *@argc: *argc pointer
 *@argv: **argv double pointer
 *
 *Description: contain your main function only.
 *section header: Section description
 *Return: returns int
 */

int main(int argc, char **argv)
{
int a, b;

int (*doug)(int, int);
if (argc != 4)
{
printf("Error\n");
exit(98);
}

if ((*argv[2] != '+' && *argv[2] != '-' && *argv[2] != '*' && *argv[2] != '/'
&& *argv[2] != '%') || strlen(argv[2]) != 1)
{
printf("Error\n");
exit(99);
}

if ((*argv[2] == '/' || *argv[2] == '%') && argv[3] == 0)
{
printf("Error\n");
exit(100);
}

a = atoi(argv[1]);
b = atoi(argv[3]);
doug = get_op_func(argv[2]);

printf("%d\n", doug(a, b));
return (0);
}
