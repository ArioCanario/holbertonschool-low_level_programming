#include "main.h"
/**
  * print_triangle - prints a square using '#'
  * @size: size of square
  *
  * Description: prints a square where '#' is the length of its sides.
  * If size is 0 or less, only prints a new line.
  * Return: void.
  */

void print_triangle(int size)
{
	int spaces, times, characters;

	for (spaces = size; spaces >= 1; spaces--)
	{
		times = spaces - 1;
		characters = size - times;
		while (times > 0)
		{
			_putchar(32);
			times--;
		}
		while (characters > 0)
		{
			_putchar('#');
			characters--;
		}
		_putchar('\n');
	}
	if (size < 1)
		_putchar('\n');
}
