#include "holberton.h"

/**
 *_isalpha -  checks for alphabet character.
 *@c: lowercase a-z
 *
 *Description: Returns 1 if c is alphabet char, else 0
 *section header: Section description
 *Return: returns int
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
