#include "lists.h"

/**
 *print_first - function that prints str before main func
 *
 *Description: function that prints str before main func
 *section header: Section description
 *Return: void
 */

void __attribute__ ((constructor)) print_first(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}
