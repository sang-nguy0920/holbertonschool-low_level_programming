#include "holberton.h"

/**
 *_islower -  checks for lowercase character.
 *@c: lowercase a-z
 *
 *Description: Returns 1 if c is lowercase, else 0
 *section header: Section description
 *Return: returns int
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
{
return (0);
}
}
