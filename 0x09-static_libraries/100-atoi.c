#include "holberton.h"
#include <stdio.h>
/**
 *_atoi - function that convert a string to an integer.
 *@s: *s pointer
 *
 *Description: function that convert a string to an integer.
 *section header: Section description
 *Return: returns integer
 */

int _atoi(char *s)
{
short boo;
int i, min, res;

i = min = res = boo = 0;
min = -1;

while (s[i] != '\0')
{
if (s[i] == '-')
min *= -1;

if (s[i] >= '0' && s[i] <= '9')
{
res *= 10;
res -= (s[i] - '0');
boo = 1;
}
else if (boo == 1)
break;
i++;
}
res *= min;
return (res);
}
