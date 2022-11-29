#include "shell.h"

extern char **environ;

/**
  *
  *
  *
  */

int main(void)
{
	char *buff, *argcount, **av = { "/bin/ls", "-l", "/var", NULL };
	size_t bufsize = 0;
	int fc = 0, status, pid_check, len;


	while (1)
	{
		if (buff == NULL)
		{
			printf("Cagaste light");
			return (0);
		}
		printf("$ ");
		getline(&buff, &bufsize, stdin);
//		len = strlen(buff[0]);
//		buff[len - 1] = '\0';
		argcount = strdup(buff);
		buff = strtok(buff, " \n"); // Recorrer caracter pot caracter y sumar 1 en los 0 o los newline
		argcount = strtok(argcount, "  \n");
		for (len = 0; argcount != '\0'; len++)
		{
			argcount = strtok(NULL, " \n");
		}
		av = malloc(sizeof(char *) * len);
		printf("%s\n", buff);
		pid_check = fork();
		wait(&status);
//		if (pid_check == 0)
//		{
//			printf("%s BUFF 0\n", buff);
//			printf("%s BUFF 1\n", buff);
			execve(av[0], av, environ);
//		}


		
	/*	while (buff != NULL)
		{
			printf("%s", buff);
			buff = strtok(NULL, " ");;
			if (buff != NULL)
			{
				printf("\n");
			}
		} */
	}
}
