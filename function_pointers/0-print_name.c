#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * Return: Nothing
 * @name: name to print
 * @f: Pointer to the function
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
