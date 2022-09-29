#include "main.h"
#include "_putchar.c"

/**
 * main - This is a description
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		print_alphabet(c);
	}
	_putchar('\n');
	return (0);
}
