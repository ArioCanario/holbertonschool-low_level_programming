#include <stdio.h>
#include <stdlib.h>
int main(void)
{
	char *buff;
	size_t bufsize = 0;

	while (1)
	{
		if (buff == NULL)
		{
			printf("Cagaste light");
			return (0);
		}
		printf("$ ");
		getline(&buff, &bufsize, stdin);
		printf("%s", buff);
	}
}
