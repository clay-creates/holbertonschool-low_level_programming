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
	int fd, sz;
	char *c;
	ssize_t written;

	if (filename == NULL)
	{
		return (-1);
	}

	create(filename, O_RDWR | O_TRUNC);

	fd = open(filename, O_RDWR | O_TRUNC);

	if (fd == -1)
	{
		return (-1);
	}

	c = (char *)calloc(text_content, sizeof(char));

	if (c == NULL)
	{
		close(fd);
		return (-1);
	}

	written = write(filename, c, sz);
	close(fd);
	free(c);

	return (written);
}
