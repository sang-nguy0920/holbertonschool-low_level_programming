#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *strtow -  function that splits a string into words.
 *@str: *str pointer
 *
 *Description:  function that splits a string into words.
 *section header: Section description
 *Return: returns char
 */

char **strtow(char *str)
{
char **new;
int wrd;
int sz = 0;
int i, a = 0, b = 0;
int mem = 0;
int plc = 0;

if (str == NULL || *str == '\0')
return (NULL);

while (str[sz] != '\0')
{

if (str[sz] == ' ')
sz++;

else
{
while(str[sz] != ' ' && str[sz] != '\0')
sz++;
wrd++;
}
}

new = (char **)malloc((wrd + 1) * sizeof(char *));

while (str[a] != '\0')
{
if (str[a] == ' ')
a++;
else
{
b = 0;
while (str[a] != ' ' && str[a] != '\0')
{
a++;
b++;
}
new[mem] = malloc((b + 1) * sizeof(char));
mem++;
}
}
while (str[sz] != '\0')
{

if (str[sz] == ' ')
i++;

else
{
mem = 0;
while(str[i] != ' ' && str[i] != '\0')
{
new[mem][plc] = str[i];
i++;
plc++;
}
new[mem][plc] = '\0';
mem++;
}
}
new[mem] = NULL;
return (new);
}
