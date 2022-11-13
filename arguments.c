#include <stdio.h>
#include <stdlib.h>

/*
 * main - entry point
 *
 * @argc: argument count
 * @argv: array
 *
 * return (0)
 */

int main (int __attribute__((unused))argc, char **argv)
{
	int i = 0;

	while (argv[i])
	{
		printf("%s ", argv[i]);
		i++;
	}
	printf("\n");
	return (0);
}
