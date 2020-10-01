#include "holberton.h"
#include <stdio.h>

/**
 *cap_string - function that capitalizes all words of a string.
 *@s: *s pointer
 *
 *Description: function that capitalizes all words of a string.
 *section header: Section description
 *Return: returns char s
 */

char *cap_string(char *s)
{
int i, j;

char sep[13] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
'(', ')', '{', '}'};

for (i = 0; s[i] != '\0'; i++)
{
for (j = 0; sep[j] != '\0'; j++)
{
if (i == 0)
{
if (s[i] >= 'a' && s[i] <= 'z')
{
s[i] = s[i] - 32;
}
}
if (s[i] == sep[j])
{
s[i + 1] = s[i + 1] - 32;
}
}
}
return (s);
}
