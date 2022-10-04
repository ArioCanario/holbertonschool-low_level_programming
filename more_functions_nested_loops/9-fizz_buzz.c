#include <stdio.h>

/**
 * main - Prints numbers from 1 to 100 but Fizz c = 3,
 * Buzz c = 5, FizzBuzz if c = 5 * 3
 * Return: 0
 */

int main(void)
{
	int c;

	for (c = 1; c <= 100; c++)
	{
		if ((c % 3) == 0 && (c % 5) == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if ((c % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if ((c % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", c);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
