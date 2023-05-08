#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - creates a file with given content
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, flags, mode;
	size_t len;

	if (filename == NULL)
		return (-1);
	flags = O_WRONLY | O_CREAT | O_TRUNC;
	mode = S_IRUSR | S_IWUSR;
	fd = open(filename, flags, mode);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++)
			;
		if (write(fd, text_content, len) != (ssize_t) len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
