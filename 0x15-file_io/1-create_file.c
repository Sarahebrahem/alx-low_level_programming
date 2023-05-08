#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - creates a file with the specified name and writes the
 * specified text content to it.
 * @filename: the name of the file to create
 * @text_content: the content to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		w = write(fd, text_content, len);
		if (w != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
