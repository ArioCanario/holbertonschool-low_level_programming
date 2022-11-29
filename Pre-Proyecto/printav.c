#include <stdio.h>

int main(int ac, char **av)
{
	int counter;

	for (counter = 0; av[counter]; counter++)
	{
		printf("%s\n", av[counter]);
	}
	return (counter);
}
