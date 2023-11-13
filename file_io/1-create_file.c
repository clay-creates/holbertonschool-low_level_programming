#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: string to write to the file
 *
 * Return: return 1 on success, -1 on fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC);

	if (fd == -1)
	{
		return (-1);
	}

	written = write(fd, text_content, strlen(text_content));
	close(fd);

	return (written == -1 ? -1 : 1);
}
