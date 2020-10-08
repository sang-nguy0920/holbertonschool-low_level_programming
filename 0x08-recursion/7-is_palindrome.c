#include "holberton.h"
#include <stdio.h>

/**
 *_strlen - function that returns string length.
 *@s: *s pointer
 *
 *Description: function that returns string length.
 *section header: Section description
 *Return: returns int
 */

int _strlen(char *s)
{
if (*s == '\0')
{
return (0);
}
s++;
return (1 + _strlen(s));
}

/**
 *is_palindrome - function that returns 1 if a string is a palindrome.
 *@s: *s pointer
 *
 *Description: function that returns 1 if a string is a palindrome.
 *section header: Section description
 *Return: returns int
 */

int is_palindrome(char *s)
{
int length;

length = _strlen(s);
if (length <= 1)
return (1);

return (extra_palindrome(s, length));
}

/**
 *extra_palindrome - function that returns 1 if a string is a palindrome.
 *@s: *s pointer
 *@length: int length
 *
 *Description: function that returns 1 if a string is a palindrome.
 *section header: Section description
 *Return: returns int
 */

int extra_palindrome(char *s, int length)
{
if (length <= 1)
return (1);

else if (*s == *(s + length - 1))
{
return (extra_palindrome(s + 1, length - 2));
}

else
return (0);
}
