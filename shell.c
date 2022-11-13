#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/*
 * main - Entry point
 *
 * return: 0
 */

int main(void)
{
	char *buffer = NULL;
	size_t len = 0;
	
	printf ("$ ");

	getline (&buffer, &len, stdin);

	printf("%s\n", buffer);

	free(buffer);
	exit(EXIT_SUCCESS);
}
