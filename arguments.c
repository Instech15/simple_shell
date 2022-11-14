#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point
 *
 *Return - Alwyas 0
 */
int main(__attribute__((unused))int argc, char **argv)
{
	int idx = 0;

	while (argv)
	{
		printf("argv[%d] = %s\n", idx, argv[idx]);
		idx++;
	}
	return (0);
}
