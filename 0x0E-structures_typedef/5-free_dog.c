#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_dog - function that frees dogs.
 *@d: *d pointer
 *
 *Description: function that frees dogs.
 *section header: Section description
 *Return: returns void
 */

void free_dog(dog_t *d)
{
if (d != NULL)
{
free(d->name);
free(d->owner);
free(d);
}
}
