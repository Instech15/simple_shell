#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * @pid: returns process ID
 * @ppid: returns process ID of parent
 * return: 0
 */

int main (void)
{
	pid_t mypid;
	mypid = getpid();

	printf("pid: %u\n", mypid);

	mypid = getppid();

	printf("ppid: %u\n", mypid);

	return (0);
}
