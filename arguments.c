#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments without using ac
 *
 * @argc: argument c
 * @argv: pointer argument v
 *
 * return - always 0
 */
int argument(__attribute__((unused))int argc, char **argv)
{
	int idx = 0;

	while (argv)
	{
		printf("argv[%d] = %s\n", idx, argv[idx]);
		idx++;
	}
	return (0);
}
