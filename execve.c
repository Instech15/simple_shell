#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * return: 0
 */

int main(void)
{
	char *argv[] = {NULL, "/usr/", "-l", NULL};

	printf("Before execve\n");
	if(execve(argv[0], argv, NULL) == -1)
	{
		perror("Error:");
	}
	printf("After execve\n");
	return 0;
}
