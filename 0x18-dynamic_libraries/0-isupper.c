#include "holberton.h"

/**
 *_isupper - checks for uppercase character.
 *@c: if uppercase then reutrns c
 *@:
 *Description: checks for uppercase character.
 *section header: Section description
 *Return: 1 if c is uppercase character, otherwise 0.
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
{
return (1);
}
else
{
return (0);
}
}
