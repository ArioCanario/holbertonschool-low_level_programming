#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 arguments
 * Return: 0
 * @argc: Variable
 * @argv: Pointer
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	(void)argc;
	return (0);
}
