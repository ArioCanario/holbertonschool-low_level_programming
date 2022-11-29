#include <string.h>
#include <stdio.h>
int main(void)
{
	char str[] = "Hola como estas?";
	const char sep[] = " ";
	char *token;

	token = strtok(str, sep);

	while(token != NULL)
	{
		printf("%s\n", token);

		token = strtok(NULL, sep);
	}
	return (0);
}
