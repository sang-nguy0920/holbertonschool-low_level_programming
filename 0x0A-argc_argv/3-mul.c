#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main -  program that multiplies two numbers.
 *@argc: number of args
 *@argv: *array
 *
 *Description:  program that multiplies two numbers.
 *section header: Section description
 *Return: returns int
 */

int main(int argc, char *argv[])
{
int res;

if (argc < 3 || argc > 3)
{
printf("Error\n");
return (1);
}

else
{
res = atoi(*(argv + 1)) * atoi(*(argv + 2));
printf("%d\n", res);
}
return (0);
}
