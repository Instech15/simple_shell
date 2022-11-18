#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 * _getline - Use a buffer to read many chars at once
 * @s: string
 * @length: character length
 *
 * Return: lenght of character
 */
int _getline(char *s, int length);
int main(void)
{
	char *buffer;
	size_t buffer_size = 32;
	size_t characters;

	buffer = (char *)malloc(buffer_size * sizeof(char));
	if (buffer == NULL)
	{
		perror("Failed to allocate buffer");
		exit(1);
	}
	characters = getline(&buffer, &buffer_size, stdin);
	printf("%ld characters read.\n", characters);
	printf("%s\n", buffer);

	return (0);
}
