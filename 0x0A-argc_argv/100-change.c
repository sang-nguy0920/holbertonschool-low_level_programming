#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimum number of coins to
 *
 * @argc: number of arguments given to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: If the number of arguments is not exactly one return -1.
 * Otherwise return 0
*/
int main(int argc, char *argv[])
{
int coins, total;
if (argc != 2)
{
printf("Error\n");
return (1);
}
total = atoi(argv[1]);
if (total < 1)
{
printf("0\n");
return (0);
}
while (total != 0)
{
if (total >= 25)
total -= 25;
else if (total >= 10)
total -= 10;
else if (total >= 5)
total -= 5;
else if (total >= 2)
total -= 2;
else
total -= 1;
coins++;
}
printf("%d\n", coins);
return (0);
}
