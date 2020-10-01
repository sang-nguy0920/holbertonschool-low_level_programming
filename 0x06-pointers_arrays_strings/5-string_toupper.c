#include "holberton.h"

/**
 *string_toupper - function changes all lower letters of a string to upper.
 *@s: *s pointer
 *
 *Description: function changes all lower letters of a string to upper.
 *section header: Section description
 *Return: returns char s
 */

char *string_toupper(char *s)
{
int i;
for (i = 0; s[i] != '\0'; i++)
{
if (s[i] >= 'a' && s[i] - 32)
{
s[i] -= 32;
}
}
return (s);
}
