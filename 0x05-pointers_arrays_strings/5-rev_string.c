#include "holberton.h"
#include <stdio.h>

/**
 *rev_string - function that reverses a string. 
 *@s: *s pointer
 *
 *Description: function that reverses a string. 
 *section header: Section description
 *Return: returns void
 */

void rev_string(char *s)
{
int i, j, k;
char ctype;
for (i = 0; s[i] != '\0'; i++)
{
;
}
k = i;
for (i--, j = 0; j < k / 2; i--, j++)
{
ctype = s[j];
s[j] = s[i];
s[i] = ctype;
}
}
