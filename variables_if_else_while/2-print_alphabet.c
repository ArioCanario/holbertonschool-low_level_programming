#include <stdio.h>
/**
 * main - This is a description
 * Return: 0
 */

int main(void)
	{
		char c;

		for (c = 'a'; c < 'z'; c++)
		{
			putchar(c);
		}
		if (c == 'z')
		{
			putchar(c);
			putchar('\n');
		}
			return (0);
}
