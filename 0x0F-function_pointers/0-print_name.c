#include <stdlib.h>
#include "function_pointer.h"

/**
 * print_name - function that prints a name
 * @name: The name to be printed
 * @f: The pointer to the function to be printed
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
