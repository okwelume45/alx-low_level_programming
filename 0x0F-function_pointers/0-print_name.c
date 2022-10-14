#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - print a name using the function supplied by the caller
 * @name: the name to print
 * @f: the function to call to print the name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
