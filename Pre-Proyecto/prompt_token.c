#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(void)
{
	char *buff;
	size_t bufsize = 0;
	int fc = 0;

	while (1)
	{
		if (buff == NULL && fc != 1)
		{
			printf("Cagaste light");
			return (0);
		}
		printf("$ ");
		getline(&buff, &bufsize, stdin);
		buff = strtok(buff, " ");
		fc = 1;
		while (buff != NULL)
		{
			printf("%s", buff);
			buff = strtok(NULL, " ");;
			if (buff != NULL)
			{
				printf("\n");
			}
		}
	}
}
