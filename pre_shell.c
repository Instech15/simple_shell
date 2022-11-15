#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 *
 * @argc: parameter c
 * @argv: pointer parameter v
 *
 * Return - returns number of characters
 */
int main(__attribute__((unused))int argc, __attribute__((unused))char *argv[])
{
	char *lineptr = NULL;
	size_t n = 0;
	ssize_t num_of_charac;

	printf("$ ");
	getline(&lineptr, &n, stdin);
	printf("%s", lineptr);

	printf("The lenght of characters: %ld\n", num_of_charac);

	free(lineptr);
	exit(EXIT_SUCCESS);
	return (num_of_charac);
}
