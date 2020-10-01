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
int i;
for (i = 0; s[i] != '\0'; i++)
{
while (!(s[i] >= 'a' && s[i] <= 'z'))
i++;
if (s[i - 1] == ' ' ||
s[i - 1] == '\t' ||
s[i - 1] == '\n' ||
s[i - 1] == ',' ||
s[i - 1] == ';' ||
s[i - 1] == '.' ||
s[i - 1] == '!' ||
s[i - 1] == '?' ||
s[i - 1] == '"' ||
s[i - 1] == '(' ||
s[i - 1] == ')' ||
s[i - 1] == '{' ||
s[i - 1] == '}' ||
i == 0)
s[i] = s[i] - 32;
i++;
}
return (s);
}
