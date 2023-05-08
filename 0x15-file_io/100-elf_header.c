#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

#define BUF_SIZE 1024

/**
 * error_exit - prints an error message to stderr and exits with a status code
 * @msg: the error message to print
 * @status: the status code to exit with
 */
void error_exit(char *msg, int status)
{
	dprintf(STDERR_FILENO, "%s\n", msg);
	`exit(status);
}
