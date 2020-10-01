#include "holberton.h"
#include <stdio.h>

/**
 *rot13 -  function that encodes a string using rot13.
 *@s: *s pointer
 *
 *Description:  function that encodes a string using rot13.
 *section header: Section description
 *Return: returns char s
 */

char *rot13(char *s)
{
int i, j;
char first[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char result[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; first[j] != '\0'; j++)
{
if (s[i] == first[j])
{
s[i] = result[j];
break;
}
}
}
return (s);
}
