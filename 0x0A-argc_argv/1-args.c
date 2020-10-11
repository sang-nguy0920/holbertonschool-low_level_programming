#include "holberton.h"
#include <stdio.h>
/**
 *main - program that prints the number of arguments passed into it.
 *@argc: number of args
 *@argv: *array
 *
 *Description: program that prints the number of arguments passed into it.
 *section header: Section description
 *Return: returns int
 */

int main(int argc, char *argv[])
{
int i = 0;

while (argc)
{
argc--;
argv--;
i++;
}
printf("%d\n", i - 1);
return (0);
}
