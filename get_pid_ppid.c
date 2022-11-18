#include "shell.h"

/**
 * main - Entry point
 * @pid: returns process ID
 * @ppid: returns process ID of parent
 * return: 0
 */

int get_pid(void)
{
	pid_t mypid;
	mypid = getpid();

	printf("pid: %u\n", mypid);

	mypid = getppid();

	printf("ppid: %u\n", mypid);

	return (0);
}
