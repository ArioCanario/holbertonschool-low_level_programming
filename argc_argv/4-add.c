#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers
 * @argc: -
 * @argv: -
 * Return: 0 = Success, 1 = Fail
*/

int main(int argc, char *argv[])
{

	int result = 0;
	int i, j, h;

	for (j = 1; j < argc; j++)
	{
		for (h = 0; argv[j][h] != '\0'; h++)
		{
			if (argv[j][h] < 48 || argv[j][h] > 57)
			{
				printf("Error\n");
				return (1);
			}
		}
	}

	for (i = 1; i < argc ; i++)
	{
		result = atoi(argv[i]) + result;
	}

	printf("%d\n", result);
	return (0);
}
