#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *print_dog - function that prints a struct dog
 *@d: *d pointer
 *
 *Description: function that prints a struct dog
 *section header: Section description
 *Return: returns void
 */

void print_dog(struct dog *d)
{
if (d == NULL)
return;

if (d->name == NULL)
{
printf("Name: (nil)\n");
}
else if (d->owner == NULL)
{
printf("Owner: (nil)\n");
}
else
{
printf("Name: %s\n", d->name);
printf("Name: %f\n", d->age);
printf("Name: %s\n", d->owner);
}
}
