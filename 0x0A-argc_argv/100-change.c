#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *main -  prints the minimum number of coins to make change for an amount.
 *@argc: number of args
 *@argv: *array
 *
 *Description:  prints the minimum number of coins to make change for an amount.
 *section header: Section description
 *Return: returns int
 */

int main (int argc, char *argv[])
{
int x;
int y = atoi(argv[1]);

if (argc == 2)
{
while (y != 0)
{
if (y < 0)
{
break;
}
if (y % 25 == 0)
{
y -= 25;
x++;
}
else if (y % 10 == 0)
{
y -= 10;
x++;
}
else if (y % 5 == 0)
{
y -= 5;
x++;
}
else if (y % 2 == 0)
{
y -= 2;
x++;
}
else if (y % 1 == 0)
{
y -= 1;
x++;
}
}
}
else
{
printf ("Error\n");
return (1);
}
printf ("%d\n", x);
return (0);
}
