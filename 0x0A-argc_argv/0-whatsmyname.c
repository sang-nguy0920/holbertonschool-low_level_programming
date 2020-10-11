#include "holberton.h"
#include <stdio.h>
/**
 *main - program that prints its name
 *@argc: number of args
 *@argv: *array
 *
 *Description: program that prints its name
 *section header: Section description
 *Return: returns int
 */

int main(int argc, char *argv[])
{

int i = 0;

while (i < argc)
{
if (i == 0)
{
printf("%s\n", argv[i]);
break;
}
}
return (0);
}
