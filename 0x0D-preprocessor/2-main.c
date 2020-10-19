#include "holberton.h"
#include <stdio.h>

/**
 *main - program that prints the name of the file it was compiled from
 *@void: void
 *
 *Description: program that prints the name of the file it was compiled from
 *section header: Section description
 *Return: returns int
 */

int main(void)
{
printf("%s\n", __FILE__);
return (0);
}
