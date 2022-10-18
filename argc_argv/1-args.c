#include <stdio.h>

/**
 * main - Prints the number of arguments
 * Return: 0
 * @argc: Variable
 * @argv: Pointer
 */

int main(int argc, char **argv)
{
	printf("%d\n", argc - 1);
	(void)**argv;
	return (0);
}
