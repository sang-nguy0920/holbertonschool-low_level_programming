#include "holberton.h"
#include <stdio.h>
/**
 *main -  program that prints all arguments it receives.
 *@argc: number of args
 *@argv: *array
 *
 *Description:  program that prints all arguments it receives.
 *section header: Section description
 *Return: returns int
 */

int main(int argc, char *argv[])
{
while (argc--)
{
printf("%s\n", *argv++);
}
return (0);
}
