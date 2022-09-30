#include "main.h"

void print_alphabet_x10(void)
{
	int c;
	char a;

	for (c = 0; c <= 9; c++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
	_putchar('\n');
	}
}
