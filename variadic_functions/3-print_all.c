#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints all formats
 * Return: Nothing
 * @format: Data type
 */

void print_all(const char * const format, ...)
{
	va_list args;
	int i, n = 0, check;
	char c;
	float f;
	char *s;

	va_start(args, format);
	while (format[n] != '\0')
	{
		check = 0;
		switch (format[n])
		{
			case 'c':
				{	c = va_arg(args, int);
					printf("%c", c);
					check = 1;
					break; }
			case 'i':
				{	i = va_arg(args, int);
					printf("%d", i);
					check = 1;
					break; }
			case 'f':
				{	f = va_arg(args, int);
					printf("%f", f);
					check = 1;
					break; }
			case 's':
				{	s = va_arg(args, char *);
					if (s == NULL)
						s = "(nil)";
					printf("%s", s);
					check = 1;
					break; } }
		if (format[n + 1] != '\0' && check == 1)
			printf(", ");
		n++; }
	printf("\n");
	va_end(args);
}
