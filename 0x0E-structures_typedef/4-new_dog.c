#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *_strcpy - Write a function that copies the string pointed to by src
 *@dest: *dest pointer
 *@src: *src pointer
 *
 *Description: Write a function that copies the string pointed to by src
 *section header: Section description
 *Return: returns char
 */
char *_strcpy(char *dest, char *src)
{
int i;

for (i = 0; src[i] != '\0'; i++)
{
dest[i] = src[i];
}
dest[i] = '\0';

return (dest);
}

/**
 *new_dog - function that creates a new dog.
 *@name: *name pointer
 *@age: float age
 *@owner: *owner pointer
 *
 *Description: function that creates a new dog.
 *section header: Section description
 *Return: returns dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *p;

p = malloc(sizeof(dog_t));

if (p == NULL)
return (NULL);

(*p).name = malloc(sizeof(name) + 1);

if (name == NULL)
{
free(p);
return (NULL);
}

(*p).owner = malloc(sizeof(owner) + 1);

if ((*p).owner == NULL)
{
free((*p).name);
free(p);
return (NULL);
}
_strcpy((*p).name, name);
_strcpy((*p).owner, owner);
(*p).age = age;

return (p);
}
