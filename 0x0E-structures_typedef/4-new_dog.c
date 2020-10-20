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
dog_t *freedom_pug;

freedom_pug = malloc(sizeof(dog_t));

if (freedom_pug == NULL)
return (NULL);

(*freedom_pug).name = malloc(sizeof(name) + 1);

if (name == NULL)
{
free(freedom_pug);
return (NULL);
}

(*freedom_pug).owner = malloc(sizeof(owner) + 1);

if ((*freedom_pug).owner == NULL)
{
free((*freedom_pug).name);
free(freedom_pug);
return (NULL);
}
_strcpy((*freedom_pug).name, name);
_strcpy((*freedom_pug).owner, owner);
(*freedom_pug).age = age;

return (freedom_pug);
}
