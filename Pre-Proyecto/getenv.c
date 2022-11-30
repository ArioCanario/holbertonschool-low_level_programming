#include "shell.h"

char main(const char *name)
{
	int i;
	char *buff, *src;

	buff = malloc(sizeof(char *) * 80);
	for (i = 0; environ[i]; i++)
	{
		src = strdup(environ[i]);
		strcat(buff, src);
	}

	token = strtok(buff, "=");
	while (token)
	{
		printf("%s\n", token);
		token = strtok(NULL, "=");
	}
	return (0);
}
