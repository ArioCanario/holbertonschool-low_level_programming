#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - Prints Strings
 * Return: Nothing
 * @separator: Number separator
 * @n: Number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list args;

	va_start(args, n);

	for (c = 0; c < n; c++)
	{
		char *j = va_arg(args, char *);

		if (j != NULL)
		{
			printf("%s", j);
		}
		else
		{
			printf("(nil)");
		}
		if ((c < n - 1) && (separator != NULL))
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
