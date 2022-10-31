#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints numbers
 * Return: Nothing
 * @separator: Number separator
 * @n: Numbers
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list args;

	va_start(args, n);

	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(args, int));

		if ((c < n - 1) && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}
