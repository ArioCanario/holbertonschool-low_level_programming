#include <stdio.h>

/**
 * main - prints the arguments of a line
 * Return: 0
 * @argc: Variable
 * @argv: Pointer
 */

int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
