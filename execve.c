#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * main - entry point
 *
 * @argc: argument c
 * @argv: pointer argument v
 *
 * Return: nothing on success, -1 on failure
 */

int main(int argc, char *argv[])
{
	char *newArgv[] = { NULL, "hey", "there", "welcome", NULL };
	char *newEnv[] = { NULL };

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		exit(EXIT_FAILURE);
	}
	newArgv[0] = argv[1];
	execve(argv[1], newArgv, newEnv);
	perror("execve");
	exit(EXIT_SUCCESS);
}
