#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *argstostr - function that concatenates all the arguments of your program.
 *@ac: int ac
 *@av: *av pointer
 *
 *Description: function that concatenates all the arguments of your program.
 *section header: Section description
 *Return: returns char
 */

char *argstostr(int ac, char **av)
{
int i, j;
int k = 0, sum = 0;
char *p;

if (ac == 0 || av == NULL)
return (NULL);

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++)
k++;
}

sum = ac + k;
p = malloc((sum + 1) * sizeof(char));

if (p == NULL)
return (0);
k = 0;

for (i = 0; i < ac; i++)
{
for (j = 0; av[i][j]; j++, k++)
{
p[k] = av[i][j];
p[k + 1] = '\0';
}
p[k++] = '\n';
}
return (p);
}
