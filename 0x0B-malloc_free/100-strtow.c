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
char **arrstr;
int i = 0, wordstart = 0, j = 0, k = 0, c = 0;
if (str == NULL)
return (NULL);
while (*str == ' ')
str++;
if (*str == '\0')
return (NULL);
while (str[i] != '\0')
{
if (str[i] != ' ' && str[i] != '\0')
{
while (str[i] != ' ' && str[i] != '\0')
i++;
k++;
}
if (str[i] != '\0')
i++;
}
arrstr = malloc(sizeof(char *) * (k + 1));
if (!arrstr)
return (NULL);
for (i = 0, wordstart = 0;; ++i)
if (str[i] == ' ' || str[i] == '\0')
{
arrstr[j] = malloc(sizeof(char) * (i - wordstart + 1));
if (!arrstr[j])
return (NULL);
for (c = wordstart, k = 0; c < i; ++c, ++k)
arrstr[j][k] = str[c];
arrstr[j++][k] = '\0';
for (; str[i] == ' '; ++i)
;
wordstart = i;
if (str[i] == '\0')
break;
}
arrstr[j] = NULL;
return (arrstr);
}
