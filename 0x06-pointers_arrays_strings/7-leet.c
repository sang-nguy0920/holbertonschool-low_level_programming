#include "holberton.h"
#include <stdio.h>

/**
 *leet -  function that encodes a string into 1337.
 *@s: *s pointer
 *
 *Description:  function that encodes a string into 1337.
 *section header: Section description
 *Return: returns char s
 */

char *leet(char *s)
{
int i, j;

char first[] = "aeotl";
char second[] = "AEOTL";
char result[] = "43071";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; first[j] != '\0' && second[j] != '\0'; j++)
{
if (s[i] == first[j] || s[i] == second[j])
{
s[i] = result[j];
}
}
}
return (s);
}
