#include "shell.h"

/**
 * main - entry
 *
 * Return - returns number of characters
 */
char *read_line(void)
{
	char *line = NULL;
	size_t n = 0;

	printf("$ ");
	getline(&line, &n, stdin);
	printf("%s", line);
	free(line);
	exit(EXIT_SUCCESS);
	return (line);
}
