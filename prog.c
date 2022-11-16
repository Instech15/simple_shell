#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * @argc: argument c
 * @argv: pointer argument v
 *
 * Return: ...
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d]: %s\n", i, argv[i]);
		exit(EXIT_SUCCESS);
	}
}
