#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
	int status, pid_check;

	printf("Before fork\n");
	pid_check = fork();
	wait(&status);
	if (pid_check == 0)
	{
		printf("Im the child\n");
	}
	else
	{
		printf("Im the father\n");
	}
	return (0);
}
