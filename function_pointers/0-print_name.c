#include "function_pointers.h"

/**
 * print_name - Prints a name using a function passed as parameter
 * @name: The name to print
 * @f: Pointer to function that takes a char*
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
