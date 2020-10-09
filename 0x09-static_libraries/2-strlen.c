#include "holberton.h"
#include <stdio.h>

/**
 *_strlen - function that returns the length of a string.
 *@s: *s pointer
 *
 *Description: function that returns the length of a string.
 *section header: Section description
 *Return: returns int (string length)
 */

int _strlen(char *s)
{
int length = 0;
while (s[length] != '\0')
length++;
return (length);

}
