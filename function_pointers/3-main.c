#include <stdio.h>
#include "3-calc.h"

/**
 * main - Simple calculator
 * Return: 0 on success, something else if fails
 * @argc: Number of arguments
 * @argv: Array of arguments
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	op = argv[2];
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	(void)argv;
	return (0);
}
