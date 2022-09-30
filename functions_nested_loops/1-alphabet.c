#include "main.h"
#include "_putchar.c"

/**
 * main - This is a description
 * print_alphabet - This is a description
 * Return: 0
 */
int main(void)
{
	void print_alphabet(void)
	{
		char c;

		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
		return;
	}
}
