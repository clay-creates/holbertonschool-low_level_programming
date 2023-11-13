#include "main.h"

/**
 * read_textfile - reads a text file and prints to stdin
 * @filename: name of file to read
 * @letters: number of letter to read and print
 *
 * Return: return actual number of letters read/printed, 0 on fail
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, sz;
	char *c;
	ssize_t written;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY | O_CREAT);

	if (fd == -1)
	{
		return (0);
	}

	c = (char *)calloc(letters + 1, sizeof(char));

	if (c == NULL)
	{
		close(fd);
		return (0);
	}

	sz = read(fd, c, letters);
	if (sz == -1)
	{
		close(fd);
		free(c);
		return (0);
	}

	written = write(STDOUT_FILENO, c, sz);
	close(fd);
	free(c);

	return (written);
}
