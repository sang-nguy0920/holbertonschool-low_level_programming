#include "holberton.h"
#include <stdio.h>

/**
 *wildcmp - function that compares two identical strings. Returns 1 is true. 
 *@s1: *s1 pointer
 *@s2: *s2 pointer
 *
 *Description: function that compares two identical strings. Returns 1 is true. 
 *section header: Section description
 *Return: returns int
 */

int wildcmp(char *s1, char *s2)
{
if (*s1 == *s2 && *s1 && *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	if (!*s1 && !*s2)
		return (1);
	if (*s2 == '*')
	{
		if (*(s2 + 1) != *s1 && *(s2 + 1) != '*')
			return (wildcmp(s1 + 1, s2));
		else if (*(s2 + 1) != *s1 && *(s2 + 1) == '*')
			return (wildcmp(s1, s2 + 1));
		if (!wildcmp(s1, s2 + 1))
			return (wildcmp(s1 + 1, s2));
		if (wildcmp(s1, s2 + 1))
            return (1);
    }
    return (0);
}
